#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector<int> vec;
int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        vec.resize(m);
        for (auto& c : vec) cin >> c;
        sort(vec.begin(), vec.end());
        cout << vec[m - 1] + vec[m - 2] - vec[0] - vec[1] << endl;
    }
    return 0;
}
