#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> se;
    string s;
    while(cin>>s){
        for(auto &c:s){
            if(isalpha(c)){
                c=tolower(c);
            }else{
            	c=' ';
            }
        }
        stringstream ss(s); 
        while(ss>>s)se.insert(s);
    }
    for(auto &c:se){
        cout<<c<<endl;
    }
    return 0;
}
