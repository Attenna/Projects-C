#include <stdio.h>

char CaesarCipher ( const char IN, const int D );

char CaesarCipher ( const char IN, const int D )
{
	int CC=IN;
    int i;
	if(D>=0){
		for(i = 1;i<=D;i++){
			switch(CC){
			case('9'):CC = 'A';break;
			case('Z'):CC = 'a';break;
			case('z'):CC = '0';break;
			default:CC++;break;
			}
		}
	}
	else{
		for(i = 1; i<= -D; i++){
			switch(CC){
				case('A'):CC = '9';break;
				case('a'):CC = 'Z';break;
				case('0'):CC = 'z';break;
				default:CC--; break;
			}
		}
	}
	return CC;
}

int main()
{
	
	int IN='A';
	int D=2;
	
	printf("%c", CaesarCipher(IN, D));
	
	return 0;
	
}
