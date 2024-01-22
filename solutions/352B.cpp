#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  map<int, vector<int>> m;
  for (int i = 0; i < n; i++)
    m[a[i]].push_back(i);

  vector<pair<int, int>> res;
  for (auto &[x, v] : m) {
    bool ok = true;
    int d = v.size() > 1 ? v[1] - v[0] : 0;
    for (int i = 2; i < v.size(); i++) {
      if (v[i] - v[i - 1] != d) {
        ok = false;
        break;
      }
    }
    if (ok)
      res.push_back({x, d});
  }

  cout << res.size() << endl;
  for (auto &[x, d] : res)
    cout << x << " " << d << endl;

  return 0;
}
