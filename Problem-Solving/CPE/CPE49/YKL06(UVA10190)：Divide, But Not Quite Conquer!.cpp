#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m){
  	if(n/m==n){cout<<"Boring!\n";continue;}
  	
  	vector<int> list;
  	list.push_back(n);
  	while(n%m==0){
  		n/=m;
  		list.push_back(n);
  	}
  	if(n==1){
  		for(int i=0;i<list.size();i++){
  			if(i==list.size()-1)cout<<list[i]<<endl;
  			else				cout<<list[i]<<" ";
  		}
  	}
  	else{
  		cout<<"Boring!\n";
  	}
  }
  return 0;
}
