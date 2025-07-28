#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, L;  // n为考试分钟数，L为警觉度阈值
	int x, y;  // x为查阅文档增加的警觉度，y为不查阅文档减少的警觉度
	
	// 输入
	cin >> n >> L;
	cin >> x >> y;
	
	int awareness = 0;  // 当前的警觉度
	int questions = 0;  // 已经通过的题目数
	
	// 模拟每一分钟
	for (int i = 0; i < n; ++i) {
		if (awareness + x < L) {
			// 如果查阅文档不会让警觉度超过阈值
			awareness += x;  // 增加警觉度
			questions++;      // 通过一道题
		} else {
			// 否则不查阅文档，警觉度减少
			awareness = max(0, awareness - y);  // 减少警觉度，确保不为负
		}
	}
	
	// 输出结果
	cout << questions << endl;
	
	return 0;
}

