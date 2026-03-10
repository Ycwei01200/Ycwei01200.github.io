# YKL12(UVA10170)：The Hotel with Infinite Rooms

## Problem
[UVA](https://onlinejudge.org/external/101/10170.pdf)

## Solution

```cpp
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
  ll initial_size,target_day;
  while(cin>>initial_size>>target_day){
  	ll days=1;
  	while(days <= target_day){
		days += initial_size;
	  	initial_size++;
  	}
  	cout<< initial_size-1 <<endl;
  }
  return 0;
}

```

## Explanation

* 這題，就是問說，他一次只能有一個旅行社來這個飯店，這個飯店第一個旅行社的人數是i，那後面的旅行社必須比前一個多一人，那當天入住的時間是早上，那退房的時間是當天下午，問說，給第一個旅行社的人數，假設他第n天來查房確認人數，那當下總共會有幾人。
* 那其實就是一直加上人數，但有個比較tricky的點是，假設第一個旅行社只有一個人第一天入住，第二天退房，那第二個旅行社要第三天才來，但是程式會是從2開始計算，所以到最後面要減1，這單純看你怎麼理解，你可以日期從0開始看，第一個入住加上去就會是正確的。
