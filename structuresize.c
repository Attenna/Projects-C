#include <stdio.h>

int main(){
    struct Test
{
    long long a;
    int  b;
    short c;
    char d;
};

sizeof(struct Test);
    printf("%d", sizeof(struct Test));
    return 0;
}