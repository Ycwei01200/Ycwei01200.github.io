#include<stdio.h>

int main(void){
    printf("Please enter the number of customers:");
    float n;
    scanf("%f",&n);
    n = n * 300 ; if(n >= 3000) n = n * 0.8;
    printf("Total: %.2f",n);

    return 0;
}
