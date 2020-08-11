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
		void write_file(){
		fstream writer;
	//string loss_rate = to_string(double(count_num-1.0)/double(rec_num));
	for(unsigned int i =0;i<tra_la.size();i++){
	writer.open("/ros_test/log/test/tmp/tra_"+node_name+"_"+to_string(i),std::ios::trunc|std::ios::out);
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
	writer.open("/ros_test/log/test/tmp/cal_"+node_name+"_"+to_string(i),std::ios::trunc|std::ios::out);
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
