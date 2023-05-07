#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, m;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        if (m == 1)
            cout << 2 << endl;
        else
            cout << (int)ceil(m * 1.0 / 3) << endl;
    }
    return 0;
}