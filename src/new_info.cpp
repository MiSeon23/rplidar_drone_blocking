#include "ros/ros.h"
#include "rplidar_ros_blocking/new_rplidar.h"

void msgCallback(const rplidar_ros_blocking::new_rplidar::ConstPtr& msg){
    int count = msg->count;
    for(int i=0; i<count; i++)
        ROS_INFO("new info : [%f, %f]", msg->degree[i], msg->distance[i]);
}

int main(int argc, char **argv){
    ros::init(argc, argv, "new_info");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("new_scan", 1000, msgCallback);

    ros::spin();

    return 0;
}