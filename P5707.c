#include <stdio.h>

void counter(int hour,int min,int t){
	int a,b;
	
	b = 60-t%60;
	a = 8-t/60-1;
	

	if(b == 60){
		b = 0;
		a+=1;
	}
	if (a < 0){
		a+=24;
	}
	
	printf("%02d:%02d\n",a,b);
}

int main(){
	int s, v;
	scanf("%d %d",&s,&v);
	const int h = 8;
	const int m = 0;
	const int waiting_time = 10;
	int t;
	
	if (s%v == 0){
		t = s/v+waiting_time;
	}
	else{
		t = s/v+1+waiting_time;
	}
	counter(h,m,t);
	return 0;
}
