#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
double PI=acos(-1);
int main(){
  int r=6440;double Satellites,Asteroids;
  string Ankle;
  while(cin>>Satellites>>Asteroids>>Ankle){
  	if(Ankle=="min")Asteroids/=60.;
  	cout<<fixed<<setprecision(6)<<(Satellites+r)*(Asteroids/180*PI);
  	cout<<" ";
  	cout<<fixed<<setprecision(6)<<sqrt(pow((Satellites+r),2)*2-2*pow((Satellites+r),2)*cos(Asteroids/180*PI))<<endl;
  	
  }
  
  return 0;
}
