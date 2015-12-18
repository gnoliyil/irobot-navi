               
PART  I : ROS ENVIRONMENT SETUP
--------------------------------------------------

### Step One. Ubuntu and ROS Environment Configuration

#### (1) Install Ubuntu [14.04]

Install Compilation tools:
```bash
$ sudo apt-get install build-essentials cmake 
```

#### (2) Install ROS Indigo

Install ROS Desktop: 
```bash
$ sudo apt-get install ros-indigo-desktop-full
```
 
Install ROS Serial and Navigation packages:
```bash
$ sudo apt-get install ros-indigo-serial
$ sudo apt-get install ros-indigo-navigation*
```

#### (3) Setup Environment Variables

```bash
$ source /opt/ros/indigo/setup.bash
$ vim ~/.bashrc
$ echo "source /opt/ros/indigo/setup.bash" > ~/.bashrc
```

### Step Two

Copy `catkin_ws` directory to /home/USERNAME directory.

### Step Three

Delete `~/catkin_ws/src/CMakeLists.txt`

   Then 
```bash
$ cd ~/catkin_ws/src
$ catkin_init_workspace
```
   
Then setup `catkin_ws` environment:
```bash
$ cd ~/catkin_ws/devel
$ source ./setup.sh
$ echo "source $HOME/catkin_ws/devel/setup.sh" >> ~/.bashrc
```

#### Step 4

Then if you type in `rosrun ` in the Terminal and press "Tab" key twice, you will see packages in the user workspace like `irobotcreate2ros` and `irobot_navigation`. 

----------------

PART II : DRIVER  COMPILATION
----------------------------------------------------

1. `$ cd ~/catkin_ws/
`
2. `$ catkin_make clean`

3. `$ catkin_make`

Errors may occur while compiling, so you should run `catkin_make` for at least 3 times until there is no error.

---------------

  
PART III : IROBOT  TELEOPERATION
---------------------------------------------------

0. Power on the iRobot and then press the POWER button on the iRobot for over 10seconds, release it until you hear a tune of descending pitches. 

   Then iRobot Create will communicate at **19200** baud until the power is turned off, the batter y is removed and reinserted. 

   [If you find iRobot cannot receive messages from the computer, reset the Create (by sending 7 7) and do this. ]

1. Connect the iRobot and Computer via the wire. The red LED light on the wire will be on (red), indicating that the wire is ok.

2. Run 
```bash
$ cd /dev
$ ls ttyUSB*
```   
if there is only `ttyUSB0`, `$ sudo chmod 777 ttyUSB0`

 else if there is no ttyUSB0 but other files like `ttyUSB1`, 

```bash
$ sudo mv ttyUSB1 ttyUSB0
$ sudo chmod 777 ttyUSB0
```

3. Run
```bash
$ rosrun irobotcreate2 irobotcreate2
```
Then the LED light will turn blue and start blinking, indicating that the Create is communicating with the Computer.

If errors occur, reset the iRobot and start from step 0 again. 

4. You can run `$ rosrun irobotcreate2 keyboard_node` to control use keyboard, or run `$ rviz` to start the GUI rviz, then add a "teleop" panel, setting the target to be `/cmd_vel` and teleoperate it.


The iRobotCreate2 package publishes odometry data (including position and speed) to `odom`, sensor data (like battery condition, bumper condition, wheel drop) to `battery`, `ir_bumper` and `wheel_drop` ..

It subscribes the `cmd_vel` topic to get control data.

-----------
  

PART IV : IROBOT  NAVIGATION
----------------------------------------------

In `catkin_ws/src/irobot_navigation/param_irobot` directory are configuration files about the navigation stack configured for iRobot and Xtion Pro. 

In `catkin_ws/src/irobot_navigation/maps` directory is a blank map named `blank.yaml` to be passed to the map-server.

To use the navigation stacks, 
Open 8 Terminals and type these commands respectively in the terminals:

1. Run the ROS core service.
```bash
$ roscore
```

2. Run the Xtion Pro driver.
```bash
$ roslaunch openni2_launch openni2.launch
```

3. Run the iRobot driver.
```bash
$ rosrun irobotcreate2 irobotcreate2
```

4. Run the tf transform program, publishing the coordination transform data: "The camera is 0.1m above the iRobot"
```bash
$ rosrun tf static_transform_publisher 0 0 0.1 0 0 0 1 base_link camera_link 100
```

5. Load the blank map to `/map` topic
```bash
$ rosrun map_server map_server ~/catkin_ws/src/irobot_stage/maps/blank.yaml 
```

6. Put the robot's 'place of birth' at the center of the 10m x 10m map. 
```bash
$ rosrun tf static_transform_publisher 5 5 0 0 0 0 1 map odom 100
```

7. launch the Navigation stack
```bash
$ roslaunch irobot_navigation includes/move_base_irobot.launch.xml
```

8. `$ rviz`

It is a visualization tool for ROS. 

Add a "map" node pointing to the `/map` topic. 
Add a "odometry" node pointing to the `/odom` topic. 
Add a "PointsCloud2" node pointing to the `/camera/depth/points` topic
Add 2 "map" nodes pointing to the global and local costmaps. 
Add the planned route.
Try to click on the map to set the target point.

-------------

             
PART  V : RECOVERY
-------------------------------

If the iRobot cannot move.. 

connect the iRobot to the computer and run: 
```bash
$ python ./ir1.py
```
(if you put ir1.py at your home directory)

Input **"7 7"**, press enter for several times and you will hear a ascending tune. 

Then you can turn off your iRobot safely. 

But if you want to connect to iRobot again, you should power on the iRobot and then press the POWER button on the iRobot for over 10 seconds, release it until you hear a tune of descending pitches to make it working at baudrate 19200. 

