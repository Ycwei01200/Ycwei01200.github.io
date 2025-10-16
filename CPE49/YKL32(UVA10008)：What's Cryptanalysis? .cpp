#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
bool cmp(pair<char,int> &a,pair<char,int> &b){
	if(a.second>b.second){
		return a.first>b.first;
	}
	else if(a.second==b.second){
		return a.first<b.first;
	}
	else{
		return a.first<b.first;
	}
}
int main(){
  string input;int test;cin>>test;
  map<char,int> list;
  while(getline(cin,input)){
  	for(int i=0;i<input.size();i++){
  		if(isalpha(input[i])){list[toupper(input[i])]++;}
  	}
  }
  vector<pair<char,int>> sortlist(list.begin(),list.end());
  sort(sortlist.begin(),sortlist.end(),cmp);
  for(auto&c:sortlist){
  	cout<<c.first<<" "<<c.second<<endl;
  }
  return 0;
}
