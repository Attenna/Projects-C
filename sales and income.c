#include <stdio.h>

float income (const int IN){
	float OUT = 0;
	
	switch(IN/10000){
	case 0:
		OUT = 400 + IN * 0.03;
		break;
	case 1:
		OUT = 450 + IN * 0.05;
		break;
	case 2:
		OUT = 500 + IN * 0.09;
		break;
	case 3:
		OUT = 525 + IN * 0.12;
		break;
	case 4:
		OUT = 550 + IN * 0.15;
		break;
	default:
		OUT = 575 + IN * 0.16;
	}
	return OUT;
}

int main()
{
	int IN;
	scanf("%d", &IN);
	if(IN>=1000) printf("%.2f", income(IN));
	return 0;
}
