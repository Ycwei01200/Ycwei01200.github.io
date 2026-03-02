# YKL07(UVA11461)：Square Numbers 

[UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2456)

## Solution

```cpp
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
  ll a,b;
  while(cin>>a>>b){
  	if(a==0&&b==0)break;
  	int count = 0;
  	for(int i=a;i<=b;i++){
  		int root = sqrt(i);
  		if(pow(root,2)==i)count++;
  	}
  	cout<<count<<endl;
  
  }
  return 0;
}

```

## Explanation

* 這題，這次二刷發現一個很奇怪的地方，就是，在計算平方根的時候，如果是用`sqrt()`，因為類別是`double/float`，所以如果是想用平方根相乘來判斷要小心，要先轉換成`int`。