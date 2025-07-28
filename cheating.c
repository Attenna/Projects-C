#include <stdio.h>

void cheat(int n, int L, int x, int y) {
	int awareness = 0;  // 当前的警觉度
	int count = 0;      // 已经通过的题目数
	
	for (int i = 0; i < n; i++) {  // 循环遍历每一分钟
		if (awareness + x < L) {
			// 如果查阅文档不会让警觉度超过阈值
			awareness += x;  // 增加警觉度
			count++;          // 通过一道题
		} else {
			// 否则不查阅文档，警觉度减少
			if (awareness - y < 0) {
				awareness = 0;  // 如果警觉度减去 y 后小于 0，就将警觉度设为 0
			} else {
				awareness = awareness - y;  // 否则按正常方式减少警觉度
			}// 确保警觉度不会变成负数
		}
	}
	
	// 输出最终结果
	printf("%d\n", count);
}

int main() {
	int n, L, x, y;
	
	// 输入考试时间、警觉度阈值、查阅文档增加的警觉度和不查阅文档减少的警觉度
	scanf("%d%d", &n, &L);
	scanf("%d%d", &x, &y);
	
	// 调用函数计算最大题数
	cheat(n, L, x, y);
	
	return 0;
}

