#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>
#include <string.h>
using namespace std;

void cs378testCallback(const std_msgs::String::ConstPtr& msg)
{
 string pubmsg = msg->data;
 string del = " ";
 string num = pubmsg.substr(14, pubmsg.find(del));
 string name = pubmsg.substr(0, pubmsg.find(del));

 cout << name << endl;
 cout << num << endl;
 

}

int main(int argc, char **argv)
{

 ros::init(argc, argv, "hw1sub");
 
 ros::NodeHandle n;

 ros::Subscriber sub = n.subscribe("CS378TEST", 1000, cs378testCallback);

 ros::spin();

 return 0;
}
