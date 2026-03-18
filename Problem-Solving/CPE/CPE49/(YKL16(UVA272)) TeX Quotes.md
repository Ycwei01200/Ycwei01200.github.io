# (YKL16(UVA272)) TeX Quotes 

[UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208)

## Solution

```cpp
#include<iostream>
#include<string>
using namespace std;
int main(){
  string ans="",input;
  bool check = false;
  while(getline(cin,input)){
  	
  	for(auto&c:input){
  		if(c=='"'){
  			if(!check){check = true;ans+="\`\`";}
  			else 	  {check = false;ans+="\'\'";}
  		}
  		else{
  			ans += c;
  		}
  		
  	}
  	ans += '\n';
  	
  }
  cout << ans ;
  return 0;
}

```

## Explanation

* 這題主要就是在說，如果給你一串字串，如果這個字串有包含 `"`，那就把它替換成 ``` `` ``` 或 `''`，那第一個出現的就會是 ``` `` ```，然後第二個就會是 `''`，然後第三個就會是 ``` `` ```，以此類推，每行結束都要換行，其他字元就依序輸出。那其實就只要設 if 去判斷說 char 是不是 `"`，然後再用一個 bool 去判斷說是左邊還是右邊的引號，就可以了。
