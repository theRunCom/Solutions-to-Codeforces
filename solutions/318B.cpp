#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  long long heavyCount = 0, powerCount = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s.substr(i, 5) == "heavy") {
      heavyCount++;
    } else if (s.substr(i, 5) == "metal") {
      powerCount += heavyCount;
    }
  }
  cout << powerCount << endl;
  return 0;
}
