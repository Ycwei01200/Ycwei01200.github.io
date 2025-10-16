#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isprime(int n){
	if(n<=1)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
bool isemirp(int n){
	int m=0,copy=n;
	while(n!=0){
		m=m*10+n%10;
		n/=10;
	}
	if(copy==m)return false;
	if(m<=1)return false;
	for(int i=2;i<=sqrt(m);i++){
		if(m%i==0)return false;
	}
	return true;
	
	
}
int main(){
  int n;
  while(cin>>n){
  	if(isprime(n)){
  		if(isemirp(n))cout<<n<<" is emirp.\n";
  		else		  cout<<n<<" is prime.\n";
  	}
  	else{
  		cout<<n<<" is not prime.\n";
  	}
  
  }
  return 0;
}
