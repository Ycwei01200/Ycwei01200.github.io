# YKL06(UVA10190)：Divide, But Not Quite Conquer!

[UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1012)

## Solution

```cpp
#include<iostream>
#include<vector>
using namespace std;
int main(){
  long long a,b;
  
  while(cin>>a>>b){
  	vector<long long> count;
  	if(a/b==a){cout<<"Boring!\n";continue;}
  	bool check = false;
  	while(a!=1){
  		count.push_back(a);
  		if(a%b==0)a/=b;
  		else	  {check = true;break;}
  	}
  	if(check){cout<<"Boring!\n";}
  	else{
  		for(int i=0;i<count.size();i++){
  			cout<<count[i]<<" ";
  		}
  		cout<<"1\n";
  	}
  }
  return 0;
}
```

## Explanation

* 水題，其實就是問說，這個數值，是不是可以透過，不斷的除以`b`，最後變成`1`，如果可以，就輸出，不能就輸出`Boring!`。
* 那數字沒有很大，所以可以直接用爆破的，也不會`TLE`。