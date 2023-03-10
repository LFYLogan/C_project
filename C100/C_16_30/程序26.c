//题目：利用递归方法求5!。
#include<stdio.h>

int func(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {
        return func(n-1)*n;
    }
}

int main(void)
{
    int sum;
    sum=func(5);
    printf("%d",sum);
}