#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, m, x;
    string s;
    cin >> n >> m;
    cin >> s;
    vector<int> ans(n);
    vector<int> freq(26);
    for (int i = 0; i < m; i++) {
      cin >> x;
      ans[x - 1]++;
    }
    ans[n - 1]++;
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
      sum += ans[i];
      freq[s[i] - 'a'] += sum;
    }
    for (int i = 0; i < 26; i++) {
      cout << freq[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
