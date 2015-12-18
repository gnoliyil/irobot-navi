#!/usr/bin/python
import serial
import threading
import sys
import time
from time import sleep

ser = serial.Serial('/dev/ttyUSB0', 19200, timeout=1)

def sendCommandASCII(command):
    cmd = ""
    for v in command.split():
        cmd += chr(int(v))
    print cmd
    return ser.write(cmd)

def tos16(hi, lo):
    if hi > 127:
        return hi * 256 + lo - 65536
    else: 
        return hi * 256 + lo
    
def tou16(hi, lo):
    return hi*256 + lo

def readDataPeriodical():
  fout = open('ir_data.txt', 'w'); 
  while True:
    # num = int(bytes.split()[1])
    sendCommandASCII('149 8 43 44 46 47 48 49 50 51')
    str = ser.read(16)
    h = [ord(i) for i in str]
    print >> fout, h
    if not h: 
        continue 
    speed = tos16(h[0], h[1]) 
    angle = tos16(h[2], h[3])
    bump = [tou16(h[2 + 2*i], h[3 + 2*i]) for i in [1, 2, 3, 4, 5, 6]]
    print >> fout, time.time(), ' speed = ', speed, ', angle = ', angle, 'bump = ', bump
    # sleep(0.015)
    fout.flush()

threads = []
if len(sys.argv) > 1 and sys.argv[1] == '-v':
   t1 = threading.Thread(target=readDataPeriodical, args=())
   threads.append(t1)

sendCommandASCII('150 0')
# sendCommandASCII('148 8 19 20 46 47 48 49 50 51')

for t in threads:
    t.setDaemon(True)
    t.start()

while True:
    bytes = raw_input() #[int(i) for i in raw_input().split(' ')]
    if bytes[0] != 'r':
        print bytes
        x = sendCommandASCII(bytes)
        print x
    else:
	num = int(bytes.split()[1])
        str = ser.read(num)
        print [ord(i) for i in str]

