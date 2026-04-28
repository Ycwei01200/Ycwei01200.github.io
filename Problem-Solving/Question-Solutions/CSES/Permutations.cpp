
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n,m,i=0;cin>>n;
    int* arr = new int[n];
    if(n==1)cout<<1<<endl;
    else if (n==2||n==3)cout<<"NO SOLUTION\n";
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
        
    }

    return 0;
}
