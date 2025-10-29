#include<iostream>
using namespace std;
int main(){
  int test,x1,y1,x2,y2;cin>>test;
  long long int encode1,encode2;
  for(int i=1;i<=test;i++){
  	//index(x, y) = (x + y) * (x + y + 1) / 2 + x
  	cin>>x1>>y1>>x2>>y2;
  	encode1=((x1+y1)*(x1+y1+1))/2+x1;
  	encode2=((x2+y2)*(x2+y2+1))/2+x2;
  	cout<<"Case "<<i<<": "<<encode2-encode1<<endl;
  }
  return 0;
}
