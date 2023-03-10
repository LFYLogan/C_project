//题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include<stdio.h>
#include<stdlib.h>

void reverse(int n)
{
	char next;
	if (n <= 1)
	{
		next = getchar();
		printf("\n");
		putchar(next);
	}
	else
	{
		next = getchar();
		reverse(n - 1);
		putchar(next);
	}
}

int main()
{
	reverse(5);
	return 0;
}