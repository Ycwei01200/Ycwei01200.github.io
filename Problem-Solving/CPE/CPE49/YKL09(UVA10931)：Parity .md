# (YKL09(UVA10931)) Parity 

## Problem
[UVA](https://onlinejudge.org/external/109/10931.pdf)

## Solution

```cpp
#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int main(){
  ll input;
  while(cin>>input){
  	if(!input)break;
  	string temp="";
	int count = 0;
  	while(input!=0){
  		if(input&1){temp.push_back('1');count++;}
  		else	   {temp.push_back('0');}
  		
  		input = input>>1;
  	}
  	reverse(temp.begin(),temp.end());
  	cout<<"The parity of "<<temp<<" is "<<count<<" (mod 2).\n";
  }
  return 0;
}


```

## Explanation

* 這題，就一直`/2`，然後`%2`，直到變成`0`，然後輸出，這個範圍內，數字`1`的個數。
