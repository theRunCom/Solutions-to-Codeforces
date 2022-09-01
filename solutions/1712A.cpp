#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int x, y;
    scanf("%d", &n);
    while (n--) {
        int tmp, sum = 0;
        scanf("%d%d", &x, &y);
        vector<int> arr;
        for (int i = 0; i < x; i++) {
            scanf("%d", &tmp);
            arr.push_back(tmp);
        }
        tmp = min_element(arr.begin(), arr.end());
    }
}