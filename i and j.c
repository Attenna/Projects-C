#include <stdio.h>

int main(){
int i,j;
int *p = &i;
int *q = &j;
    for(i = 0; i<5;++i){
        printf("%d",i);
    }
    for(j = 0; j<5;j++){
        printf("%d",j);
    }
    printf("\n%d\n%d",*p,*q);
    return 0;
}