#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum >= 2)
            res += 1;
    }
    cout << res << endl;
    return 0;
}