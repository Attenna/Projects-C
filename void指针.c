#include <stdio.h>

int main(){
    int num = 1024;
    int *pi = &num;
    char *ps = "AAA";
    void *pv;
    
    pv = pi;
    printf("pv = %p, pi = %p\n", pv, pi);

    pv = ps;
    printf("pv = %p, ps = %p\n", pv, ps);
    //void 可以指向任何类型,但是不能定义变量
}