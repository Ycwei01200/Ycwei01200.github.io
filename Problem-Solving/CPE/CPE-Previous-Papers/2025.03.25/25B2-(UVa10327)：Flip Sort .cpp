#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int main(){
  ll n;
  while(cin>>n){
  	vector<ll> a(n);
  	for(auto&c:a)cin>>c;
  	ll count=0;
  	for(int i=0;i<n-1;i++){
  		for(int l=0;l<n-i-1;l++){
  			if(a[l]>a[l+1]){swap(a[l+1],a[l]);count++;}
  		}
   	}
   	cout<<"Minimum exchange operations : "<<count<<endl;
   }
  
  return 0;
}
