#include<iostream>
#include<string>
#include<map>
#include<sstream>
using namespace std;
int main(){
  map <string , int> p;
  int n;cin>>n;
  string input,trans;
  getline(cin,input);
  while(n--){
  	getline(cin,input);
  	stringstream ss(input);
  	ss>>trans;
  	p[trans]++;
  }
  for(auto&c:p){
  	cout<<c.first<<" "<<c.second<<endl;
  }
  return 0;
}
