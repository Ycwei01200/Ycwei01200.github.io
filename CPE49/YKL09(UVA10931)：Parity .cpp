#include<iostream>
#include<string>
using namespace std;
void calc(int n){
	string s="";int count=0;
	while(n!=0){
		int t=n%2;
		s+=t+'0';
		n/=2;
	}
	reverse(s.begin(),s.end());

	for(int i=0;i<s.size();i++){
		if(s[i]-'0'==1)count++;
	}
	cout<<"The parity of "<<s<<" is "<<count<<" (mod 2).\n";
	
	
	
	

}
int main(){
  int n;
  while(cin>>n){
  	if(!n)break;
  	calc(n);
  }
  return 0;
}
