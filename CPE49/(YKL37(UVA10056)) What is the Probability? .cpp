#include<iostream>
using namespace std;
int main(){
  double test,num,probability,i;
  cin>>test;
  while(test--){
  	cin>>num>>probability>>i;
  	if(!probability){cout<<"0.0000"<<endl;continue;}
  	//白努力P_i = \frac{p(1 - p)^{i - 1}}{1 - (1 - p)^N}
  	double a=probability*pow(1-probability,i-1);
  	double b=1-pow(1-probability,num);
  	double c=a/b;
  	printf("%.4f\n",c);
  }
  return 0;
}
