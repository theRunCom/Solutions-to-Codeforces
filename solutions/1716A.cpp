#include <iostream>
using namespace std;
int main() {
    int n, m;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        if (m == 1)
            cout << 2 << endl;
        else
            cout << (int)((m + 2) * 1.0 / 3) << endl;
    }
    return 0;
}