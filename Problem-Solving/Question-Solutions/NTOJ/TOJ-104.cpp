#include<string>
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int m= 1+2*(n);
    for(int i=1;i<=n;i++){
        
        cout<<string(m/2-i,' ')<<string(2*i-1,'*')<<string(m/2-i,' ')<<endl;
    }
    
    
    return 0;
}
