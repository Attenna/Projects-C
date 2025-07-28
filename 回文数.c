#include <stdio.h>

void checkPalindrome(int num, int len) {
    int original = num;
    int reversed = 0;
    int power = 1;

    // 计算反转后的数字
    for (int i = 0; i < len; i++) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    num = original; // 恢复原始数字

    int isPalindrome = 1; // 假设是回文数
    for (int i = 0; i < len / 2; i++) {
        int high = num / power % 10;
        int low = reversed / power % 10;
        printf("%d %d\n", high, low);
        if (high != low) {
            isPalindrome = 0; // 不是回文数
            break;
        }
        power *= 10;
    }

    if (len % 2 != 0 && isPalindrome) {
        // 如果长度是奇数，输出中间的数字两次
        int middle = num / power % 10;
        printf("%d %d\n", middle, middle);
    }

    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    int num, len;
    scanf("%d %d", &num, &len);
    checkPalindrome(num, len);
    return 0;
}