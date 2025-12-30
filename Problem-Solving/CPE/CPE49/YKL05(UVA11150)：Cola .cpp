#include<iostream>
#include<algorithm>
using namespace std;
int npluss(int n){
	int count=n,remain;
	while(n/3){
		count+=(n/3);
		remain=n%3;
		n/=3;
		n+=remain;
	}
	return count;
}
int pluss(int n){
	int count=n,remain;
	n+=1;
	while(n/3){
		count+=(n/3);
		remain=n%3;
		n/=3;
		n+=remain;
	}
	return count;
}
int main(){
  int n;
  while(cin>>n){
  	int count,count1;
  	count=pluss(n);count1=npluss(n);
  	cout<<max(count,count1)<<endl;
  }
  return 0;
}
