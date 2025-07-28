#include <stdio.h>

int Palindrome ( const char c[], const int N );

int main()
{
	char c[100]="Able was I ere I saw Elba";
	printf("%d", Palindrome(c, 100));
	return 0;
}

int Palindrome ( const char c[], const int N )
{
	char flitered[N];
	int flitered_len = 0;
	
	for(int i = 0;i<N && c[i] != '\0';i++)
	{
		if(('A'<= c[i] && c[i]<= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
		{
			flitered[flitered_len] = (c[i]>= 'A' &&c[i]<='Z')?c[i]+32:c[i];
			flitered_len ++;
		}
	}
	
	int left = 0;
	int right = flitered_len -1;
	
	while(left<right)
	{
		if(flitered[left] != flitered[right]){
			return 0;
		}
		left ++;
		right --;
	}
	return 1;
}
//我需要写什么？首先，我需要2个草稿纸变量。然后一个最终判断数组。
//草稿变量里面记录移动位置，如果对应的原始数据是大写，则写进判断数组小写。
//如果是空格，标点符号，不记录，草稿1加一，草稿二不动。

//接下来判断回文。
