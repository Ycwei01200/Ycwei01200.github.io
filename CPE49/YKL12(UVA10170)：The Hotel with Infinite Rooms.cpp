#include<iostream>
using namespace std;
using ll = long long;
int main(){
  ll s,d;
  
  while(cin>>s>>d){
  	ll date=0;
  	for(ll i=s;;i++){
  		date+=i;
  		if(date>=d){cout<<i<<endl;break;}
  	}
  
  
  }
  return 0;
}
