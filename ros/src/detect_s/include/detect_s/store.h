#ifndef STORE_H
#define STORE_H
#include <fstream>
using namespace std;
class StoreBundle{
	public:
		StoreBundle(){}
		void init(string nn, int num){
		node_name = nn;
		for(unsigned int i =0;i<num;i++){
		vector<uint64_t>tmp;
		tra_la.push_back(tmp);
		cal_la.push_back(tmp);
		}
		}
		void write_file(){// node name: /xx, pay attention!!!
			cout<<"node name:"<<node_name<<endl;
		cout<<"tra size:"<<tra_la.size()<<endl;
		cout<<"cal size:"<<cal_la.size()<<endl;
		cout<<"tra0 size:"<<tra_la[0].size()<<endl;
		cout<<"cal0 size:"<<cal_la[0].size()<<endl;
			fstream writer;
	//string loss_rate = to_string(double(count_num-1.0)/double(rec_num));
	for(unsigned int i =0;i<tra_la.size();i++){
	writer.open("/ros_test/log/test/tmp"+node_name+"_"+to_string(i)+"_tra",std::ios_base::out);
	if(writer.is_open())cout<<"open success"<<endl;
		/*vector<double> res = analyze_latency(latency[i]);
		cout<<"result:"<<i<<endl;
		for(unsigned int j=0;j<res.size();j++){
			writer<<res[j]<<endl;
			cout<<res[j]<<endl;
		}*/
		for(unsigned int j =0;j<tra_la[i].size();j++){
		writer<<tra_la[i][j]<<endl;
		}
	writer.close();
	}
for(unsigned int i =0;i<cal_la.size();i++){
	writer.open("/ros_test/log/test/tmp"+node_name+"_"+to_string(i)+"_cal",std::ios_base::out);
		/*vector<double> res = analyze_latency(latency[i]);
		cout<<"result:"<<i<<endl;
		for(unsigned int j=0;j<res.size();j++){
			writer<<res[j]<<endl;
			cout<<res[j]<<endl;
		}*/
		for(unsigned int j =0;j<cal_la[i].size();j++){
		writer<<cal_la[i][j]<<endl;
		}
	writer.close();
	}

		}
string node_name;
vector<vector<uint64_t>>tra_la;
vector<vector<uint64_t>>cal_la;
};
#endif
