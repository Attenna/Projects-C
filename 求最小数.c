//从键盘获得一组大于零的数，求最小值，输入小于等于0的数字结束循环
#include <stdio.h>
#include <limits.h> // 用于INT_MAX

int main() {
	int N;
	int min = INT_MAX; // 初始化为最大整数
	
	do {
		scanf("%d", &N);
		if (N > 0) {
			if (N < min) {
				min = N;
			}
		}
	} while (N > 0);
	
	printf("%d\n", min);
	return 0;
}
