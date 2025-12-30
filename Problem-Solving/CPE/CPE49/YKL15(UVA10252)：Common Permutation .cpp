#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  
  string x,y;
  while(getline(cin,x)&&getline(cin,y)){
  	vector<int> list1(26);vector<int> list2(26);
  	
  	for(int i=0;i<x.size();i++){
  		list1[x[i]-'a']++;
  	}
  	for(int i=0;i<y.size();i++){
  		list2[y[i]-'a']++;
  	}
  	for(int j=0;j<26;j++){
  		int n=min(list1[j],list2[j]);
  		list1[j]=n;
  	}
  	
  	for(int i=0;i<26;i++){
  		while(list1[i]--){
  			cout<<char('a'+i);
  		}
  	}
  	cout<<endl;
  }
  	return 0;
}
