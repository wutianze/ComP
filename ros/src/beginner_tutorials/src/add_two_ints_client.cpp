#include "ros/ros.h"
#include "beginner_tutorials/AddTwoInts.h"
#include <cstdlib>
#include <fstream>
int main(int argc, char **argv)
{
	int64_t size = atoll(argv[1]);
ROS_INFO("size:%ld",size);
std::string to_send = std::string(size,'a');
	  ros::init(argc, argv, "add_two_ints_client");
	      ros::NodeHandle n;
	        ros::ServiceClient client = n.serviceClient<beginner_tutorials::AddTwoInts>("add_two_ints");
		  beginner_tutorials::AddTwoInts srv;
		  std::fstream writer;
		  writer.open("/ros_test/log/tmp",std::ios::trunc|std::ios::out);
		    srv.request.a = to_send;
		    //for(int i=0;i<100;i++){
		   while(true){    
		    uint64_t start_time = ros::Time::now().toNSec();
			    if (client.call(srv))
				  {
		        uint64_t end_time = ros::Time::now().toNSec();
			uint64_t ttl = end_time - start_time;		  
			//ROS_INFO("TTL: %ld",ttl);
					  writer<<ttl<<"\n";
					        }
			  else
				    {
					        ROS_ERROR("Failed to call service add_two_ints");
						    return 1;
						      }
			  //ros::Duration(1).sleep();
		    }
		    writer.close();
			    return 0;
}
