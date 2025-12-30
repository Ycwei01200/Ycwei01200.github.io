#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b,c;
    double d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    double tot = 20*((a*1.25+b*2+c*1)/(15*4.25))+(d+e)*0.4;
    if(tot>=f){cout<<"YA\n";}
    else      {cout<<"QQ\n";}

    
    return 0;
    
}
