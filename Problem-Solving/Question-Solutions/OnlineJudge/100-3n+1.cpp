#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
long long Algorithm(long long n, long long &calc) {
  if (n == 1) {
    return calc;
  } else if (n & 1) {
    n = 3 * n + 1;
  } else {
    n /= 2;
  }

  calc++;
  return Algorithm(n, calc);
}
int main() {
  long long times;
  vector<long long> list;
  long long n, m;
  while (cin >> n >> m) {
    if (n == 0 && m == 0)
      break;
    for (long long i = min(n, m); i <= max(n, m); i++) {
      long long calc = 0;
      times = Algorithm(i, calc);
      list.push_back(times);
    }
    cout << n << " " << m << " "
         << *max_element(list.begin(), list.end()) + 1 // n m是原本的輸入
         << endl;
    list.clear();
  }
  return 0;
}