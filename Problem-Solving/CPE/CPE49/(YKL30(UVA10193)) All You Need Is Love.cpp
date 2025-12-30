
#include<iostream>
#include<string>
using namespace std;
using ll = long long;
int gcd(ll count1,ll count2){
	if(count1%count2==0)return count2;
	return gcd(count2,count1%count2);
}
bool calc(string n,string m){
	ll count1=0,count2=0;
	reverse(n.begin(),n.end());
	reverse(m.begin(),m.end());
	for(int i=0;i<n.size();i++){
		count1+=(n[i]-'0')*pow(2,i);
	}
	//cout<<count1<<endl;
	for(int i=0;i<m.size();i++){
		count2+=(m[i]-'0')*pow(2,i);
	}
	if(gcd(count1,count2)==1)return false;
	else					 return true;
	
}


int main(){
  string n,m;ll count=1,test;
  cin>>test;getline(cin,n);
  while(getline(cin,n)&&getline(cin,m)){
  	
 	if(calc(n,m)){cout<<"Pair #"<<count<<": All you need is love!\n";count++;}
 	else		 {cout<<"Pair #"<<count<<": Love is not all you need!\n";count++;}
  
  
  }
  return 0;
}

