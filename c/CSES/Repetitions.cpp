

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;cin>>s;
    int maxcount=1,count=1;
    
    for(int i=1;i<=s.size();i++){
        if(s[i-1]==s[i])count++;
        else            {
            if(count>maxcount)maxcount=count;
            count=1;
        }
    }
    cout<<maxcount<<endl;
    return 0;
}
