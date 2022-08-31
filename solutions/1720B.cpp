/*
4
8
1 2 2 3 1 5 6 1
5
1 2 3 100 200
4
3 3 3 3
6
7 8 3 1 1 8

9
297
0
14


max(a1,a2,…,al−1,ar+1,ar+2,…,an)−min(a1,a2,…,al−1,ar+1,ar+2,…,an)+max(al,…,ar)−min(al,…,ar).
*/
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
        for (int i = 1; i <= m; i++)
            s[i] = s[i - 1] + a[i];
    }
    return 0;
}
