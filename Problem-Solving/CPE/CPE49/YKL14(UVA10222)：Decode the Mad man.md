# YKL14(UVA10222)：Decode the Mad man

## Problem
[UVA](https://onlinejudge.org/external/102/10222.pdf)

## Solution

```cpp
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string temp="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
  string input;
  while(getline(cin,input)){
	  for(int i=0;i<input.size();i++){
	  	input[i] = tolower(input[i]);
	  	if(input[i]==' '){cout<<input[i];continue;}
	  	auto x = find(temp.begin(),temp.end(),input[i])-temp.begin();
	  	cout<<temp[x-2];
	  }
	  cout<<endl;
}
  return 0;
}


```

## Explanation

* 這題，就是說，他把你的鍵盤上的符號輸入進去，那你要輸出原本的符號減去兩個位置的符號，假設是`h`，那輸出就是`f`，大概是這樣的概念，那事實上就只能用陣列存，然後先把字母都換成小寫，再去找陣列的位置-2後的值。

