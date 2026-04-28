#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b,c,d;
    cin>>a>>c>>b>>d;
    
    if (a == b && c == d)
        cout << "GOOD";
    else if (a == b || c == d)
        cout << "=~=";
    else
        cout << "OTZ";

    
    return 0;
    
}
