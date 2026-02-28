# YKL05(UVA11150)：Cola

[UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2091)

## Solution

```cpp
#include<iostream>
#include<algorithm>
using namespace std;
int cola_way1(int n){
	int rest = n%3;
	int newbottle = n/3;
	int total = n;int temp_tot=n;
	while(temp_tot/3!=0){
		total += newbottle;
		temp_tot = rest + newbottle;
		rest = temp_tot % 3;
		newbottle = temp_tot/3;
	}
	return total;
}
int cola_way2(int n){
	int rest = (n+1)%3;
	int newbottle = (n+1)/3;
	int total = n;int temp_tot = (n+1);
	while(temp_tot/3!=0){
		total += newbottle;
		temp_tot = rest + newbottle;
		rest = temp_tot % 3;
		newbottle = temp_tot/3;
	}
	//total += newbottle;
	return total;
}
int main(){
  int n;
  while(cin>>n){
  //if(n==2){cout<<"3"<<endl;continue;}
	  cout<<max(cola_way1(n),cola_way2(n))<<endl;
  }
  
  return 0;
}

```

## Explanation

* 這題，我是兩個方法都有算，其實兩個方法大同小異，就只是，計算的時候，有沒有先加`1`，剩下就都相同，如果有三罐可樂，那就可以多拿一個新的可樂，計算的時候，要算說，每一輪沒喝過的可樂數，加上新拿到的可樂數，再除以三，就是下一輪可以拿到的新可樂數，以此類推。