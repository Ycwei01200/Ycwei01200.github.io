//*
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
void sort(ll arr[1000],ll num){
	for(int i = 0 ; i < num ; i++){
		for(int l = 1; l < num; l ++){
			if(arr[l-1]>arr[l]){
				int x = arr[l];
				arr[l] = arr[l-1];
				arr[l-1] = x;
			}
		}
	}
}
int main(){
  ll test,num;
  scanf("%lld",&test);
  while(test--){
  	ll arr[1000]={0};
  	scanf("%lld",&num);
  	for(ll i = 0; i<num;i++)scanf("%lld",&arr[i]);
  	sort(arr,num);
  	ll mid = arr[num/2],count=0;
  	for(ll i = 0; i<num;i++)count+=llabs(arr[i]-mid);
  
  	printf("%lld\n",count);
  }
  return 0;
}


