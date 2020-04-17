#include "ros/ros.h"
#include "std_msgs/String.h"
#include "pub_sub/Num.h"
#include <sstream>

/**
 *  * This tutorial demonstrates simple sending of messages over the ROS system.
 *   */
int main(int argc, char **argv)
{
	  ros::init(argc, argv, "talker");
	    ros::NodeHandle n;

		std::string channel_name = argv[5];  
		int num_pub = atoi(argv[6]);
ros::Publisher chatter_pubs[num_pub];
/*for(int i=0;i<num_pub;i++){
	      chatter_pubs[i] = n.advertise<pub_sub::Num>(channel_name+std::to_string(i), 1);
}*/
	      chatter_pubs[0] = n.advertise<pub_sub::Num>(channel_name, 1);
	      //ros::Publisher chatter_pub = n.advertise<pub_sub::Num>(channel_name, 1);
	      int time_con = atoi(argv[2]);
	      int64_t str_size = atoll(argv[3]);
	        ros::Rate loop_rate(atoi(argv[1]));
		int64_t count = 0;
		  std::string to_send = std::string(str_size,'a');
		pub_sub::Num msg;
						      msg.content = to_send;
		    //int64_t loop_time = atol(argv[4])*atoi(argv[1]);
		   // int64_t loop_num = 0;
		while (true)
			      {
				      //loop_num++;
				for(int j =0;j<time_con;j++){			   
				      count++;
				      msg.id = count;
				      //for(int k=0;k<num_pub;k++){
				      msg.timestamp = ros::Time::now().toNSec();
				      chatter_pubs[0].publish(msg);
				      //}
				}
								      loop_rate.sleep();
									    }
		//ros::Duration(5).sleep();
		//msg.id = -1;
		//chatter_pub.publish(msg);
		      return 0;
}
