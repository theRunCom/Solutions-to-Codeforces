#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
      int item;
      cin >> item;
      for (int j = 2; j * j <= item; j++) {
        while (item % j == 0) {
          mp[j]++;
          item /= j;
        }
      }
      if (item > 1) {
        mp[item]++;
      }
    }

    int res = 1;
    for (auto e : mp) {
      if (e.second % n != 0)
        res = 0;
    }

    cout << (res ? "YES" : "NO") << endl;
  }
  return 0;
}
