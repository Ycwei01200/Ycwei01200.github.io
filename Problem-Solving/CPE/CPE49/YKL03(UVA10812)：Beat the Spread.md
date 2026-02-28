# YKL03 (UVA10812) Beat the Spread

[UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&problem=1912)

## Solution

```cpp
#include<iostream>
using namespace std;
int main(){
  int sum,difference,cases,a,b;cin>>cases;
  while(cases--){
  	cin>>sum>>difference;bool check = false;
  	if(sum<difference){check = true;}
  	else{
  		a = (sum+difference)/2;
  		b = (sum-difference)/2;
  		if(a+b!=sum||a-b!=difference){check = true;}
  	}
  	if(check)cout<<"impossible\n";
  	else{cout<<a<<" "<<b<<endl;}
  }
  return 0;
}


```

## Explanation

* 這題就算二元一次方程式，但因為都是正整數，所以不可能會有和小於差的情況，以及`a`和`b`為浮點數的情況。


