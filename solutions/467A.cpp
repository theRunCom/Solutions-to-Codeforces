#include <iostream>
using namespace std;

int main() {
  int n, res = 0;
  cin >> n;
  while (n--) {
    int p, q;
    cin >> p >> q;
    if (q - p >= 2)
      res++;
  }
  cout << res << endl;
  return 0;
}
