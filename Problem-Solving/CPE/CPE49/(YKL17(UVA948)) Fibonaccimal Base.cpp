#include<iostream>
using namespace std;
int main(){
  int n,f[40]={0,1},p;
  for(int i=2;i<40;i++)f[i]=f[i-1]+f[i-2];
  cin>>n;
  while(cin>>n){
  	cout<<n<<" = ";
		int p=39;
		while(f[p]>n)p--;
  		for(int l=p;l>=2;l--){
  			if(f[l]<=n){
  				
  				cout<<1;
  				n-=f[l];
  			}
  			else{
  				cout<<0;
  			}
  		
  		}
  	cout<<" (fib)\n";
  	}
  
  
  return 0;
}
