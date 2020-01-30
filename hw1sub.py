#!/usr/bin/env python

import rospy
from race.msg import hw1_msg

rospy.init_node('hw1pub', anonymous=True)

def incoming(msg):
    rospy.loginfo('%s', msg.message)
    rospy.loginfo('%d', msg.number)

pub = rospy.Subscriber('CS378TEST', hw1_msg, incoming)
rospy.spin()

