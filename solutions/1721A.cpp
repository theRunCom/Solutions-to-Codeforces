#include <iostream>
#include <set>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		s1 += s2;
		cout << set<char>(s1.begin(), s1.end()).size() - 1 << endl;
	}
	return 0;
}