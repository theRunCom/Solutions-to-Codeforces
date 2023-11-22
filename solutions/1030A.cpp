#include <iostream>
using namespace std;
 
int main() {
  int n;
  int result = 0;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    if (x == 1) {
      result = 1;
      break;
    }
  }
  result ? cout << "HARD" : cout << "EASY";
  return 0;
}