#include<iostream>
#include<iomanip>
using namespace std;
long long  kuti	=10000000;
long long  lakh	=100000;
long long  hajar=1000;
long long  shata=100;
void bangla(long long  n){
	if(n>=kuti){
		bangla(n/kuti);
		cout<<" kuti";
		n%=kuti;
	}
	if(n>=lakh){
		cout<<" "<<n/lakh<<" lakh";
		n%=lakh;
	}
	if(n>=hajar){
		cout<<" "<<n/hajar<<" hajar";
		n%=hajar;
	}
	if(n>=shata){
		cout<<" "<<n/shata<<" shata";
		n%=shata;
	}
	if(n)cout<<" "<<n;
}
int main(){
  long long  n,test=1;
  while(cin>>n){
  	cout<<setw(4)<<test<<".";test++;
  	if(n){
  		bangla(n);
  		cout<<endl;
  	}
  	else{
  		cout<<" 0\n";
  	}
  }
  
  
  return 0;
}
