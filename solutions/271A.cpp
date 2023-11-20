#include <iostream>
#include <set>
using namespace std;

bool isBeautifulYear(int year) {
  set<int> digits;
  while (year > 0) {
    int digit = year % 10;
    if (digits.find(digit) != digits.end()) {
      return false;
    }
    digits.insert(digit);
    year /= 10;
  }
  return true;
}

int main() {
  int year;
  cin >> year;

  while (1) {
    year++;
    if (isBeautifulYear(year)) {
      cout << year << endl;
      break;
    }
  }

  return 0;
}
