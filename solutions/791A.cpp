#include <iostream>
using namespace std;

int main() {
  int a, b;
  int res = 0;
  cin >> a >> b;
  while (a <= b) {
    a *= 3;
    b *= 2;
    res++;
  }
  cout << res << endl;
  return 0;
}
