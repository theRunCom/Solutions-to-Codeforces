#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n, k, nums[200010], res;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> nums[i];
    for (int i = n - 1; i; i--)
      nums[i] = min(nums[i + 1], nums[i]);
    cin >> k;
    res = 1e9;
    for (int i = 1; i <= n; i++) {
      int temp = nums[i] - nums[i - 1];
      if (temp)
        res = min(res, k / temp), k -= res * temp;
      cout << res << " ";
    }
    cout << endl;
  }
  return 0;
}
