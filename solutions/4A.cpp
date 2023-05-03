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
