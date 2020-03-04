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
$ cd src_new
$ git clone https://github.com/MiSeon23/rplidar_drone_blocking
$ cd ..
$ catkin_make --source src_new
$ cd build
$ make -j4
```

How to run
```
//check the authority of rplidar's serial-port
$ ls -l /dev |grep ttyUSB

//add the authority of write (such as /dev/ttyUSB0)
$ sudo chmod 666 /dev/ttyUSB0

$ roslaunch rplidar_ros rplidar.launch (a1)
$ roslaunch rplidar_ros rplidar_s1.launch (s1)

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
