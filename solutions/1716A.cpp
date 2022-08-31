#include <iostream>
using namespace std;
int main() {
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        if (m == 1) cout << 2 << endl;
        else if (m <= 4) cout << m - 3 + 2 << endl;
        else cout << m - 3 - 2 << endl;
    }
    return 0;
}