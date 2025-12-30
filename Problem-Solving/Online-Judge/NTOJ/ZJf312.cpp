#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main(){
    int a1,b1,c1;
    int a2,b2,c2;
    int input;
    ll max=-9999999;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    cin>>input;
    
    
    for(int i=0;i<=(input);i++){
        ll Y1 = a1*pow(i,2)+b1*i+c1;
        ll Y2 = a2*pow((input-i),2)+b2*(input-i)+c2;
        if((Y1+Y2)>max)max=Y1+Y2;
    }
    cout<<max<<endl;
    return 0;
    
}
