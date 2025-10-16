#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int main(){
  string xvalue,coefficient; 
  while(getline(cin,xvalue)){
  	int x=stoi(xvalue),count=0;
  	vector<int> list;
  	getline(cin,coefficient);
  	int coe;
  	stringstream ss;
  	ss << coefficient;
  	while(ss >> coe){
  		list.push_back(coe);
  	}
  	
  	reverse(list.begin(),list.end());
  	for(int i=1;i<list.size();i++){
  		count+=i*list[i]*pow(x,i-1);
  	}
  	cout<<count<<endl;	
  }
  	
  
  
  return 0;
}
