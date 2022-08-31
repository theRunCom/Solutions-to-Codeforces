#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 10;
int n, m;
int a[N], s[N];
int main() {
    scanf("%d", &n);
    while (n--) {
        int sum;
        scanf("%d", &m);
        for (int i = 1; i <= m; i++)
            scanf("%d", &a[i]);
        sort(a, a + m);
        cout << a[m - 1] + a[m - 2] - a[0] - a[1] << endl;
    }
    return 0;
}
