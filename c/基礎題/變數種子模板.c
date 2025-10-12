
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    
    srand(time(0));
    int dice;
    for(int i = 0 ; i < 5; i++){
        
        
        dice = rand()%6 + 1;
        
        printf("%d\n",dice);
        
        
    }
    return 0;
}
