# YKL11(UVA10035)：Primary Arithmetic

## Problem
[UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=976)

## Solution

```cpp
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  string a,b;
  while(cin>>a>>b){
  	if(a=="0"&&b=="0")break;
  	int size = max(a.size(),b.size())+1;
  	reverse(a.begin(),a.end());
  	reverse(b.begin(),b.end());
  	while(a.size()<size)a+='0';
  	while(b.size()<size)b+='0';
  	//cout<<a<<"\n"<<b<<endl;
  	int carry = 0,sum = 0,temp_carry=0;
  	for(int i=0;i<size;i++){
  		sum = temp_carry +(a[i]-'0')+(b[i]-'0');
  		if(sum>=10){sum%=10;temp_carry=1;carry++;}
  		else{temp_carry = 0;}
  	}
  	if(carry>1)				cout<<carry<<" carry operations.\n";
  	else if(carry==1)	    cout<<carry<<" carry operation.\n";
  	else					cout<<"No carry operation.\n";
  	
  }
  return 0;
}


```

## Explanation

* 這題，用字串解決最理想，不確定十位數有沒有超過`long long`或`int`範圍，所以直接用字串處理，一個`carry`要記錄總進位次數，另一個要記錄`temp_carry`，也就是進位，如果大於10就取模+進位，大致概念是這樣。
