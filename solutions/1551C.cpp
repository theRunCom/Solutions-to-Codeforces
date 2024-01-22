#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int a[5][N];

int main() {
  int t;
  cin >> t;
  while (t--) {
    memset(a, 0, sizeof(a));
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
      cin >> s;
      for (char c : s)
        a[c - 'a'][i] += 2;
      for (int j = 0; j < 5; j++)
        a[j][i] -= s.size();
    }
    int ans = 0;
    for (int i = 0; i < 5; i++) {
      sort(a[i], a[i] + n, greater<int>());
      int ni = 0, sum = 0;
      for (int j = 0; j < n; j++) {
        if (sum + a[i][j] > 0) {
          sum += a[i][j];
          ni++;
        } else
          break;
      }
      ans = max(ni, ans);
    }
    cout << ans << endl;
  }
  return 0;
}
