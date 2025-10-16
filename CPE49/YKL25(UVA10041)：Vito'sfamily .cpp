#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long ;
void calc(vector<ll> list){
	ll size=list.size(),mid,count=0;
	if(size&1)mid=list[size/2];
	else	  mid=(list[size/2-1]+list[size/2])/2;
	for(auto&c:list)count+=abs(c-mid);
	cout<<count<<endl;
}
int main(){
  ll n,m,input;cin>>n;
  while(n--){
  	cin>>m;vector<ll> list;
  	while(m--){
  		cin>>input;
  		list.push_back(input);
  	}
  	sort(list.begin(),list.end());
  	calc(list);
  	
  }
  return 0;
}
