#include<iostream>
using namespace std;
int main(){
  int test,number=1,x,y;cin >> test;
  while(test--){
  	cin>>x>>y;int count=0;
  	for(int i=x;i<=y;i++){
  		if(i&1)count+=i;
  	}
  	cout<<"Case "<<number<<": "<<count<<endl;
  	number++;
  }
  return 0;
}
