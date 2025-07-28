#include <stdio.h>
#include <math.h>

void printBasePower(int number, int base) {
    int power = 0;
    while (number > 0) {
        int digit = number % base;
        if (digit != 0) {
            printf("%d %d\n", digit, (int)pow(base, power));
        }
        number /= base;
        power++;
    }
}

int main() {
    int i, T, n, base;
    
    scanf("%d", &T);
    for (i = 1; i <= T; i++) {
        scanf("%d%d", &n, &base);
        printf("Test Cases %d :\n", i);
        printBasePower(n, base);
    }
    
    return 0;
}