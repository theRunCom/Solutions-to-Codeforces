#include <iostream>
using namespace std;

int main() {
  int n, res = 0, count = 0;
  cin >> n;
  while (n--) {
    int enter, exit;
    cin >> enter >> exit;
    count += (exit - enter);
    res = max(res, count);
  }
  cout << res << endl;
  return 0;
}
