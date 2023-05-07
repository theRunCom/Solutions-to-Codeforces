#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        if (m <= (a + b + c - 3) && m >= max(a,max(b,c)) * 2 - a - b - c - 1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}