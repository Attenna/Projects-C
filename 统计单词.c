#include <stdio.h>

int main() {
	char target[101], text[1001];
	int i = 0, j = 0, count = 0, first_pos = -1, pos = 0, match = 1;
	
	// 读取输入
	fgets(target, 101, stdin);
	fgets(text, 1001, stdin);
	
	// 去掉换行符
	while (target[i] != '\0') {
		if (target[i] == '\n') target[i] = '\0';
		i++;
	}
	
	// 遍历文章
	while (text[j] != '\0') {
		// 跳过连续空格
		while (text[j] == ' ') j++;
		
		// 如果当前位置是单词开头，检查是否匹配目标单词
		pos = j;
		i = 0;
		match = 1;
		while (target[i] != '\0' && text[j] != '\0' && text[j] != ' ') {
			char c1 = (target[i] >= 'A' && target[i] <= 'Z') ? target[i] + 'a' - 'A' : target[i];
			char c2 = (text[j] >= 'A' && text[j] <= 'Z') ? text[j] + 'a' - 'A' : text[j];
			if (c1 != c2) {
				match = 0;
				break;
			}
			i++;
			j++;
		}
		
		// 检查单词长度是否匹配
		if (match && target[i] == '\0' && (text[j] == ' ' || text[j] == '\0')) {
			count++;
			if (first_pos == -1) {
				first_pos = pos;
			}
		}
		
		// 跳过当前单词剩余部分
		while (text[j] != '\0' && text[j] != ' ') j++;
	}
	
	if (count > 0) {
		printf("%d %d\n", count, first_pos);
	} else {
		printf("-1\n");
	}
	
	return 0;
}

