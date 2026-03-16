# YKL15(UVA10252)：Common Permutation

## Problem
[UVA](https://onlinejudge.org/external/102/10252.pdf)

## Solution

```cpp
#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
  string x,y;
  
  while(getline(cin,x),getline(cin,y)){
  	  unordered_map <char,int>hash_map_x(26);
  	  unordered_map <char,int>hash_map_y(26);
	  for(auto&c:x)hash_map_x[c-'a']++;
	  for(auto&c:y)hash_map_y[c-'a']++;
	  string ans="";
	  for(int i=0;i<26;i++){
	  	int x = min(hash_map_x[i],hash_map_y[i]);
	  	if(x != 0){ans += string(x,char(i+'a'));}
	  }
	  cout<<ans<<endl;
  }
  return 0;
}

```

## Explanation

* 這題就用兩個hash map來記錄x和y的字母出現次數，然後再去跑迴圈找出他們的最小值次數，紀錄在ans，最後輸出。

