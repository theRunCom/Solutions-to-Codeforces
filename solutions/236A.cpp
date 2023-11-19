#include <iostream>
#include <set>
using namespace std;

int main() {
  string str;
  cin >> str;

  set<char> unique_strs;
  for (auto c : str) {
    unique_strs.insert(c);
  }

  if (unique_strs.size() % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }

  return 0;
}
