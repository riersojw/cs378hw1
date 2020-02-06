#include "ros/ros.h"
#include "std_msgs/String.h"
#include <cstdlib>
using namespace std;

#include <sstream>

int main(int argc, char **argv)
{

ros::init(argc, argv, "hw1pub");

ros::NodeHandle n;

ros::Publisher pub = n.advertise<std_msgs::String>("CS378TEST", 1000);

ros::Rate loop_rate(10);

int rnum;

while (ros::ok())
{

 std_msgs::String msg;

 std::stringstream ss;
 rnum = (rand() % 10) + 1;
 ss << "TestParameter " << rnum;
 msg.data = ss.str();

 cout << msg.data.c_str() << endl;

 pub.publish(msg);

 loop_rate.sleep();

}

 return 0;

}
