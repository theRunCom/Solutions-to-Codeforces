#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

stack<char> c;
string s, res = "";
ll pos;

int main() {
  int t;
  cin >> t;
  while (t--) {
    while (c.size())
      c.pop();
    cin >> s >> pos;
    ll idx = 0, n = s.length();
    for (ll i = 0; i < n; i++) {
      if (pos <= n - i) {
        idx = i;
        break;
      }
      pos -= n - i;
    }
    for (int i = 0; i < n; i++) {
      while (c.size() && c.top() > s[i] && idx)
        c.pop(), idx--;
      c.push(s[i]);
    }
    while (c.size() > pos)
      c.pop();
    res += c.top();
  }
  cout << res << endl;
  return 0;
}
