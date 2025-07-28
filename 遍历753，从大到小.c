//Write a program to find all three-digit numbers consisting of 3,5,7 whose digits are different from each other
#include <stdio.h>

int main(){
	int i,j,k;
	for (i = 7; i >= 3 ; i-= 2){
		for(j = 7; j >= 3 ; j-= 2){
			for(k = 7 ; k >=3 ; k-= 2){
				printf("%d\n", i*100+j*10+k);
			}
		}
	}
	return 0;
}
