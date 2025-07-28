#include <stdio.h>

int n,m,k;
int a[1000];

void bubblesorting(int a[],int n){
    int i,j;
    for(i = 0; i < n; i++){
        for(j = 0; j< n-i; j++){
            if(a[j] < a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int calc1(int a[],int m,int n){
    int i;
    int sum1 = 0;
    for(i = 0; i <(n-m); i++){
        sum1 += a[i];
    }
    return sum1;
}

int calc2(int a[],int k){
    int i;
    int sum2 = 0;
    sum2 = (k*100000);
    for(i = 0;i<k;i++){
        sum2 -= a[m-i-1];
    }
    return sum2;
}

int main(){
    int i;
    scanf("%d %d %d",&n,&m,&k);
    for(i = 0; i<n ;i++){
        scanf("%d",&a[i]);
    }
    bubblesorting(a,n);
    int sum1 = calc1(a,m,n);
    int sum2 = calc2(a,k);
    int total = sum1 + sum2;
    printf("%d\n",total);
    return 0;
}