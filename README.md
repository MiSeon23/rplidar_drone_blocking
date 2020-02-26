# rplidar_drone blocking

How to build
```
$ cd catkin_ws/src
$ git clone https://github.com/MiSeon23/rplidar_drone_blocking
$ catkin_make

-----
/* if catkin_ws was already built by 'catkin build'
 * or if there's a package can't built by 'catkin_make',
 * make new src folder */
$ cd catkin_ws
$ mkdir src_new
$ catkin_make --source src_new
$ cd build
$ make -j4
```

How to run (for rplidar a1)
```
$ roslaunch rplidar_ros rplidar.launch

$ rosrun rplidar_ros rplidarNodeClient

$ rosrun rplidar_ros rplidarNodeSubscriber
```

##### reference : https://github.com/Slamtec/rplidar_ros

---

### RPLIDAR ROS package
=====================================================================

ROS node and test application for RPLIDAR

Visit following Website for more details about RPLIDAR:

rplidar roswiki: http://wiki.ros.org/rplidar

rplidar HomePage:   http://www.slamtec.com/en/Lidar

rplidar SDK: https://github.com/Slamtec/rplidar_sdk

rplidar Tutorial:  https://github.com/robopeak/rplidar_ros/wiki
