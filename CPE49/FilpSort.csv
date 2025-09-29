#include<iostream>
#include<vector>
//注意一下 bubble sort實際上第一輪就可以把最大值找出來
//所以實際上要注意的是多次的swap，以及內部迴圈的n-i-1
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
