# (25F1(UVa100)) The 3n + 1 problem

[UVA](https://onlinejudge.org/external/1/100.pdf)

## Solution

```cpp
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll check(ll temp){
	ll count = 0;
	while(temp!=1){
		if(temp&1) {temp = 3*temp+1;}
		else	   {temp = temp/=2;}
		count++;
	}
	return count;
}
int main(){
  ll a,b;
  while(cin>>a>>b){
  	vector<ll> count;
  	for(ll i=min(a,b);i<=max(a,b);i++){
		count.push_back(check(i));
  	}
  	cout<<a<<" "<<b<<" "<<*max_element(count.begin(),count.end())+1<<endl;
  }
  return 0;
}
```

## Explanation

* 這題，就是給你一個範圍，然後，對這個範圍內的每一個數字，做`3n+1`的運算，直到變成`1`，然後輸出，這個範圍內，數字跑最多次的次數。

