
#include <stdio.h>
int main()
{
    char string[100]={};
    char c;int i=0;
    while(1){
        scanf("%c",&c);
        string[i]=c;i++;
        if(c=='\n'){break;}
    }
    string[i]='\0';
    printf("%s\n",string);

    return 0;
}
