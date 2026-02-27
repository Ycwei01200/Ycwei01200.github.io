# YKL49 (UVA11321) Sort! Sort!! and Sort!!!

[UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&problem=1912)

## Solution

```cpp
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int x, y;

bool cmp(int a, int b) {
    if ((a % y) != (b % y)) {
        return (a % y) < (b % y); // mod 結果小的在前
    }

    if ((a & 1) && (b & 1)) {
        return a > b;              // 都是奇數：大的在前
    } else if (!(a & 1) && !(b & 1)) {
        return a < b;              // 都是偶數：小的在前
    } else {
        return a & 1;              // 一奇一偶：奇數在前
    }
}

int main() {
    cin >> x >> y;
    cout << x << " " << y << endl;
    vector<int> num(x);
    for (auto &c : num)
        cin >> c;
    sort(num.begin(), num.end(), cmp);
    for (auto &c : num)
        cout << c << endl;
    cout << "0 0\n";
    return 0;
}
```

## Explanation

這題是一道排序題，排序規則共三條：

1. 按照數字 `mod y` 的結果由小到大排序
2. 若 `mod` 結果相同，且兩者都是奇數，則奇數由大到小排序
3. 若 `mod` 結果相同，且兩者都是偶數，則偶數由小到大排序
4. 若 `mod` 結果相同，一奇一偶，則奇數排在偶數前面

## Solution Explanation

這題用自定義 `cmp` 函數搭配 `sort` 來解，結構上分成三個判斷：

* 第一個 `if`：比較 `mod y` 的結果
* 第二個 `if`：處理兩者都是奇數的情況
* 第三個 `else if`：處理兩者都是偶數的情況
* `else`：一奇一偶，回傳 `a & 1`，若 `a` 是奇數則為 true，即 `a` 排前面

**關於 `cmp` 的回傳值邏輯：**

`cmp(a, b)` 回傳 `true` 代表 `a` 排在 `b` 前面。因此：

* `return a > b` → 大的在前（降序）
* `return a < b` → 小的在前（升序）

以奇數排序為例，题目要求奇數由大到小，所以要寫 `return a > b`。
若誤寫成 `return a < b`，則小的會排前面，與題目要求相反。
