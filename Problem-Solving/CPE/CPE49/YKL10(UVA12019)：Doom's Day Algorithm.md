# YKL10(UVA12019)：Doom's Day Algorithm

## Problem
[UVA](https://onlinejudge.org/external/120/12019.pdf)

## Solution

```cpp
#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,m,d;cin>>n;
  int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  string date[8]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
  while(n--){
  	cin>>m>>d;
  	int count=0;
  	for(int i=0;i<m;i++)count+=month[i];
  	cout<<date[(count+d)%7]<<endl;
  }
  return 0;
}

```

## Explanation

* 這題，建議先找好一個基準點`1/1`是星期幾，並且每個月的日期加總模7，對應date的index就可以過了。
