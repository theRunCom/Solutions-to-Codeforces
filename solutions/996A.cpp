#include <iostream>
using namespace std;

int main() {
  int amount;
  cin >> amount;

  int count = 0;
  int denominations[] = {100, 20, 10, 5, 1};

  for (int i = 0; i < 5; i++) {
    count += amount / denominations[i];
    amount %= denominations[i];
  }

  cout << count << endl;

  return 0;
}
