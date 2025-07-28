#include <stdio.h>

int findMax(const int c[], const int N);

int main()
{
	int c[100]={10, 20, 30, 20, 10};
	int id=findMax(c, 5);
	printf("%d,%d", id, c[id]);
	return 0;
}

int findMax(const int c[], const int N)
{
	int i = 0;
	int seq = 0;
	int temp = c[0];
	
	for (i = 0; i < N ; i++)
	{
		if (c[i]>temp)
		{
			temp = c[i];
			seq = i;
		}
	}
	return seq;
}
