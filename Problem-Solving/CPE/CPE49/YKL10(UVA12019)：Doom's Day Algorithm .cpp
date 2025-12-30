#include<iostream>
#include<string>
using namespace std;
int main(){
  int test,m,d;cin>>test;
  string week[7]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
  int monthday[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  while(test--){
  	cin>>m>>d;
  	int count=d;
  	for(int i=1;i<m;i++){count+=monthday[i];}
  	cout<<week[count%7]<<endl;
  	
  	
  }
  return 0;
}
