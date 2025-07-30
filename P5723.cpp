#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int L;
	scanf("%d",&L);
	int load;
	int counting;
	for(int i = 2; ; i++){
		int is_prime = 1;
		for (int j = 2; j*j <= i; j++){
			if(i%j ==0){
				is_prime = 0;
				break;
			}
		}
		if(is_prime ==1){
			if((load+i) <= L){
			load += i;
			counting++;
			printf("%d\n",i);}
			else{
				break;
			}
		}
		
		
		

	}
	printf("%d",counting);
	return 0;
}
