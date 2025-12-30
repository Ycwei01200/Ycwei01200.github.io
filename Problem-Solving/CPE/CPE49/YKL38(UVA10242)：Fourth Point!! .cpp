#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double a[2]={};
  double b[2]={};
  double c[2]={};
  double d[2]={};
  double e[2]={};
  double ab[2],cd[2];
  while(cin>>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>e[0]>>e[1]){
  	ab[1]=b[1]-a[1];ab[0]=b[0]-a[0];
  	if(a[1]==c[1]&&a[0]==c[0]){
		d[0]=e[0]+ab[0];
		d[1]=e[1]+ab[1];
  	}
  	else if(a[0]==e[0]&&a[1]==e[1]){
  		d[0]=c[0]+ab[0];
		d[1]=c[1]+ab[1];
  	
  	}
  	else if(b[0]==c[0]&&b[1]==c[1]){
  		d[0]=e[0]-ab[0];
		d[1]=e[1]-ab[1];
  	}
  	else if(b[0]==e[0]&&b[1]==e[1]){
  		d[0]=c[0]-ab[0];
  		d[1]=c[1]-ab[1];
  	}
  	
  	
  	
  	cout<<fixed<<setprecision(3)<<d[0]<<" ";
  	cout<<fixed<<setprecision(3)<<d[1]<<endl;
  }
  
  return 0;
}
