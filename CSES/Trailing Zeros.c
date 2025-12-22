
#include <stdio.h>
typedef long long ll;
int calczero(int n){
    ll count=0,temp=5;
    while(n/temp>0){
        count+=n/temp;
        temp*=5;
    }
    return count;
    
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",calczero(n));
    return 0;
}
