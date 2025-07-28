#include <stdio.h>

int main(){
	int c = 0;
	while (scanf("%c",&c) != EOF){
		if (c == '\n'){
			break;
		}
		else if(c<'0' || c > '9'){
			continue;
		}
		else{
			printf("%c\n",c);
		}
	}
	return 0;
}
