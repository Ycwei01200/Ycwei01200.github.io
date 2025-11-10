#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b;char op;
    cin>>a>>op>>b;
    
    switch(op){
        case ('+'):
            cout<<fixed<<setprecision(4)<<a<<" + "<<b<<" = "<<a+b<<endl;
            break;
        case ('-'):
            cout<<fixed<<setprecision(4)<<a<<" - "<<b<<" = "<<a-b<<endl;
            break;
        case ('*'):
            cout<<fixed<<setprecision(4)<<a<<" * "<<b<<" = "<<a*b<<endl;
            break;
        case ('/'):
            if(b==0){cout<<"ERROR\n";return 0;}
            else    {cout<<fixed<<setprecision(4)<<a<<" / "<<b<<" = "<<a/b<<endl;}
            break;
        default:
            return 0;
    }
    
    return 0;
    
}
