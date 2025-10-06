#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
int main(){
  ll n,m,count=1;
  
  while(cin>>n){
  	vector<ll> a(n),b;
  	bool check=true;
  	for(auto&c:a)cin>>c;
  	for(int i=1;i<n;i++){
 
  		if(a[i-1]>=a[i]||a[i-1]==0){check=false;break;}
  	}
  	if(!check){cout<<"Case #"<<count<<": It is not a B2-Sequence.\n\n";count++;continue;}
  	
  	for(int i=0;i<n;i++){
  		for(int l=i;l<n;l++){
  			b.push_back(a[i]+a[l]);
  		}
  	}
  	ll size=b.size();
  	sort(b.begin(),b.end());
  	//for(int i=0;i<size;i++){cout<<b[i]<<endl;}
  	
	
  	for(int i=1;i<size;i++){
  			if(b[i-1]==b[i]){check=false;break;}
  		}
  
  	
  
  	if(!check){cout<<"Case #"<<count<<": It is not a B2-Sequence.\n\n";}
  	else	  {cout<<"Case #"<<count<<": It is a B2-Sequence.\n\n";}
   
  	count++;
  }
  return 0;
}
