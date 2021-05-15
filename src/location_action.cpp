#include "ros/ros.h"
#include "location_monitor/nearestObjectSrvMessage.h"

int main(int argc, char** argv)
{

    ros::init(argc, argv, "location_action");

    ros::NodeHandle nodeHandle;
    location_monitor::nearestObjectSrvMessage messageSrv;

    if (ros::service::call("getNearestObject", messageSrv))
    {
        ROS_INFO("Service Resonse received and nearest obect = %s", messageSrv.response.objectName.c_str());
    }
    else
    {
        ROS_ERROR("Service response not received");
    }

    return 0;
}