
#include <stdio.h>
#include <math.h>
int max(int n,int m){
    
    if(n>m){return n;}
    else    return m;
    
}
int min(int n,int m){
    
    if(n>m){return m;}
    else    return n;
    
}
int main()
{
    int n,m,l;
    while(scanf("%d %d %d",&n,&m,&l)){
        int z=max(n,max(m,l));
        int x=min(n,min(m,l)),y=n+m+l-x-z;
    
        if(n==m&&m==l){
            printf("Regular Triangle\n");
        }
        else if(n==m||m==l||n==l){
            printf("isosceles Triangle\n");
        }
        else if(pow(x,2)+pow(y,2)==pow(z,2)){
            printf("Rectangular Triangle\n");
        }
        else{
            printf("Triangle\n");
        }
    }
    return 0;
}
