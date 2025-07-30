#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	long long ans = 0;
	long long factor = 1;
	for(int i = 1; i <= n; i++){
		factor *= i;
		ans = ans + factor;
	}
	printf("%lld",ans);
	return 0;
} 
