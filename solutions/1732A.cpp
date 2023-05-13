#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		int x = 0;
		cin >> n;
		int a[n];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			x = __gcd(x, a[i]);
		}
		if (x == 1) cout << 0 << endl;
		else if (__gcd(x, n) == 1)
			cout << 1 << endl;
		else if (__gcd(x, n - 1) == 1)
			cout << 2 << endl;
		else
			cout << 3 << endl;
	}
	return 0;
}