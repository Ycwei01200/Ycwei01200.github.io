# UVA10038.Jolly Jumpers


## Description

A sequence of n > 0 integers is called a jolly jumper if the absolute values of the differences between successive elements take on all possible values 1 through n - 1. For instance, the sequence 1 4 2 3 is a jolly jumper, because the absolute differences are 3 2 1, which is a permutation of {1, 2, 3}. The definition implies that any sequence of a single integer is a jolly jumper.

Input
Each line of input contains an integer n followed by n integers representing the sequence. The input ends at EOF.

Output
For each line of input, generate a line of output saying Jolly or Not jolly.

Sample Input
```
4 1 4 2 3
5 1 4 2 -1 6
```
Sample Output
```
Jolly
Not jolly
```
## Solution

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int> input(n);
        vector<int> permutationset;
        for(auto&c:input)cin>>c;
        bool check = true;int count = 1;
        for(int i = 1 ; i < n ; i++){
            permutationset.push_back(abs(input[i]-input[i-1]));
        }
        sort(permutationset.begin(),permutationset.end());
        for(int i = 0 ; i != permutationset.size() ; i++){
            if(permutationset[i] != count)check = false;
            count++;
        }
        if(check)cout<<"Jolly\n";
        else     cout<<"Not jolly\n";
    }
    return 0;
}

```

## Explanation

*  水題，照著題目做，一個陣列用來存輸入的數字，一個用來存取差值，然後排序，再比對是不是1到n-1，如果是就是Jolly，不是就是Not jolly，唯一要注意可能只是`abs`。

