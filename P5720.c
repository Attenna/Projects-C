#include <stdio.h>

int main(){
	int l;
	scanf("%d",&l);
	int i =1;
	
	while(l != 1){
		l /= 2;
		i++;
	}
	printf("%d",i);
}
