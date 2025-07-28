#include <stdio.h>

int main(){
	int m,t,s;
	scanf("%d%d%d",&m,&t,&s);
	if(t == 0){
		printf("%d",m);
		return 0;
	}
	int full_time = m*t;
	int time_left = full_time - s;
	int apple_left = time_left / t;
	printf("%d",apple_left);
	return 0;
}
