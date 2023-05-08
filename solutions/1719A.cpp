#include <iostream>
using namespace std;
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        puts((n + m) % 2 ? "Burenka" : "Tonya");
    }
    return 0;
}