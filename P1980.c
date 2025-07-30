#include <stdio.h>

int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	int count = 0;
	for (int i = 1; i <= n; i++) {
		int temp = i;
		while (temp != 0) {
			if (temp % 10 == x) {
				count++;
			}
			temp /= 10;
		}
	}
	printf("%d", count);
	return 0;
}
