#include <stdio.h>
//定义结构体（64位系统）
int main(){
	int x = 0;
struct Test
{
	long long a;
	int  b;
	short c;
	char d;
};

x = sizeof(struct Test) ;
printf("%d",&x);
return 0;
}
