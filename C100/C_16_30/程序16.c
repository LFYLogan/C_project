//题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入两个数");
    scanf("%d %d",&a,&b);
	int r,temp=0,p,a1;
	if( a < b)//交换a,b,保证最大数放在a中，最小数放在b中
	{
		temp=a;
		a=b;
		b=temp;
	}
    p=a*b;
	while(b)
	{
		r=a % b;//求a/b的余数
		a=b; 
		b=r;
	}	
    printf("它们的最大公约数为:%d\n",a);
    printf("它们的最小公倍数为:%d\n",p/a);
}