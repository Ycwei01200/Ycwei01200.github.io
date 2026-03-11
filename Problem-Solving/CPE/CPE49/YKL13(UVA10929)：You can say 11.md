# (YKL13(UVA10929)) You can say 11

## Problem
[UVA](https://onlinejudge.org/external/109/p10929.pdf)

## Solution

```cpp
#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int main(){
  string input;
  ll odd,even;
  while(getline(cin,input)){
  	if(input=="0")break;
  	odd = 0,even = 0;
  	for(int i=0;i<input.size();i++){
  		if(i&1)odd+=input[i]-'0';
  		else   even+=input[i]-'0';
  	}
  	if(abs(odd-even)%11==0)cout<<input<<" is a multiple of 11.\n";
  	else				   cout<<input<<" is not a multiple of 11.\n";
  }
  return 0;
}
```

## Explanation

* 這題，就是單純問能不能被11整除，然後我發現`long long`沒辦法直接處理，所以只能用小時候學過的一些整除概念:如果`abs(odd-even)%11==0`，代表這個數字是可以被11整除的，就可以解出來了。

