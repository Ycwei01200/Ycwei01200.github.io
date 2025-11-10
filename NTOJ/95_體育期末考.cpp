
#include <iostream>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    if(n==1){
        if(m>=8){cout<<"PASS!\n";}
        else   {cout<<"FAIL! You see see you!\n";}
    }
    else if(n==2){
        if(m>=9){cout<<"PASS!\n";}
        else   {cout<<"FAIL! You see see you!\n";}
    }
    else if(n==3){
        if(m>=10){cout<<"PASS!\n";}
        else   {cout<<"FAIL! You see see you!\n";}
    }
    else{
        return 0;
    }
        
    
   

    return 0;
}
