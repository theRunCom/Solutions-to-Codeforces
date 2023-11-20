#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    int remainder = a % b;
    int addition = remainder == 0 ? 0 : b - remainder;

    cout << addition << endl;
  }

  return 0;
}
