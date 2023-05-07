#include <iostream>
using namespace std;
int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        int x, res = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> x;
            res += (i < k && x > k);
        }
        cout << res << endl;
    }
    return 0;
}