#include <ros/ros.h>
#include <irobotcreate2/RoombaIR.h>
#include <sensor_msgs/LaserScan.h>

void sensorListenerCallback
     (const irobotcreate2::RoombaIR_::ConstPtr& ir_data)
{
    ROS_INFO("Header.frame_id = %s", ir_data.header.frame_id.c_str()); 
    ROS_INFO("Signal = %d", ir_data.signal); 
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "sensor_listener"); 
    ros::NodeHandle n; 
    ros::Subscriber sub = n.subscribe("sensor", 1000, sensorListenerCallback);
    ros::spin();
    return 0; 
}

