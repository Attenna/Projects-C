#include <stdio.h>

int main()
{
    char *msg1 = "Good Morning!";
    char *msg2 = "Good Morning!";
    int i = 0;
    int equal = 1; // 假设字符串相等

    // 比较字符串的每个字符
    while (msg1[i] != '\0' && msg2[i] != '\0') {
        if (msg1[i] != msg2[i]) {
            equal = 0; // 字符串不相等
            break;
        }
        i++;
    }

    // 如果两个字符串长度不同，则它们不相等
    if (msg1[i] != '\0' || msg2[i] != '\0') {
        equal = 0;
    }

    if (equal)
        printf("equal\n");
    else
        printf("not equal\n");

    return 0;
}