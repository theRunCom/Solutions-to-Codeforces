// 判断这个数是否是非2的偶数，非2偶数一定可以被分为两个偶数之和的
#include <iostream>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	if (n == 2) puts("NO");
	else if (n % 2 == 0)
		puts("YES");
	else
		puts("NO");
	return 0;
}
