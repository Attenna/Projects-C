/*编写函数，根据输入的N，打印由"_"和"*"组成的倒三角。  
例如：  
输入3  
打印
*/
#include <stdio.h>

int printStar ( const int N ){
	for (int i = 0; i<N/2+1;i++){
		for(int j = 0 ; j < i ; j++){
			printf("_");
		}
		for (int k = 0; k < N - 2 * i; k++) {
			printf("*");
		}
		for (int j = 0; j < i; j++) {
			printf("_");
		}
		printf("\n");
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	if(N%2) printStar (N);
	else  printf("need input uneven number!");
	return 0;
}
