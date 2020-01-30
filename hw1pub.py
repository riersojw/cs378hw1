#!/usr/bin/env python

import rospy
import random
from race.msg import hw1_msg

rospy.init_node('hw1pub', anonymous=True)
pub = rospy.Publisher('CS378TEST', hw1_msg, queue_size=10)

try:
    rate = rospy.Rate(10)
    while not rospy.is_shutdown():
        msg = hw1_msg()
        msg.message = 'TestParameter'
        msg.number = random.randint(1, 10)
        pub.publish(msg);
        rate.sleep();
except rospy.ROSInterruptException:
    pass


