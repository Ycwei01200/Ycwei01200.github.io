//Creater: Yu-Cheng Wei <iixun01200.tw@gmail.com>
//topic: 355_05_Godlike
#include<iostream>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    ll n,m,max1=-999,max2=-999,input;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>input;
        if (input > max1) {
            max2 = max1;
            max1 = input; 
        } 

        else if (input > max2 && input != max1) { 
            max2 = input;
        }
    }
    cout<<max2<<'\n';
    return 0;
}
