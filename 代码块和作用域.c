#include <stdio.h>

//代码块和作用域,代码块中的变量和外部变量是不同的变量

int main(void){
    int i = 100;//i1
        {int i = 110;
        {
            int i = 120;
            printf("i = %d\n", i);
        }
        {
            int i = 130;
            printf("i = %d\n", i);
        }
        printf("i = %d\n", i);
        }
    printf("i = %d\n", i);
    return 0;
}