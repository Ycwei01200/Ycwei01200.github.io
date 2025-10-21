
#include<stdio.h>
int main(){
  int test,day,parties,h;
  
  scanf("%d",&test);
  while(test--){
  	scanf("%d",&day);
  	scanf("%d",&parties);
  	int days[3651]={0};long long count=0;
  	for(int l = 0 ; l < parties ; l++){
  		scanf("%d",&h);
  		
  		for(int ki = h;ki <= day;ki+=h){
  			if(ki%7==6||ki%7==0){
  				continue;
  			}
  			else if(days[ki]==0){
  				count++;
  				days[ki]=1;
  			}
  		}
  	}
  	printf("%lld\n",count);
  }
  
  
  return 0;
}

