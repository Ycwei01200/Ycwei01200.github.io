# YKL02 (UVA10783) Odd Sum

[UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1724)

## Solution

```cpp
#include<iostream>
using namespace std;
int main(){
  int test,number=1,x,y;cin >> test;
  while(test--){
  	cin>>x>>y;int count=0;
  	for(int i=x;i<=y;i++){
  		if(i&1)count+=i;
  	}
  	cout<<"Case "<<number<<": "<<count<<endl;
  	number++;
  }
  return 0;
}

```

## Explanation

* 這題，就是叫你把 x 到 y 之間的所有奇數加起來，就這樣


