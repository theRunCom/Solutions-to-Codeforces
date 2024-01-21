#include <bits/stdc++.h>
using namespace std;

int main() {
  int odd = 0, even = 0, odd_count = 0, even_count = 0;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      even = i + 1;
      even_count++;
    } else {
      odd = i + 1;
      odd_count++;
    }
  }
  if (even_count == 1) {
    cout << even << endl;
  } else {
    cout << odd << endl;
  }
  return 0;
}
