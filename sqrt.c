#include <stdio.h>
float average(x,y){
    return (x+y)/2;
}



float sqrt(a){
    float sqrt_update(x,a){
        return average(x,a/x);
    }
    float sqrt_close(x){
        return appeox_eq(x*x,a);
    }
    return improve(sqrt_update,sqrt_close);
}
int main(){
    int x = 5;
    int a = 2;
    printf("%f",sqrt(a));
    return 0;
}