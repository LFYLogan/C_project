//题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程找出1000以内的所有完数。
#include<stdio.h>
int main()
{
    int number, i;
    int sum=0;
    printf("输入一个整数: ");
    scanf("%d",&number);
 
    printf("%d 的因数有: ", number);
    for(i=1; i < number; ++i)
    {
        if (number%i == 0)
        {
            printf("%d ",i);
            sum+=i;
        }
    }
    if(number==sum)
    {
        printf("是完数");
    }
    else
    {
        printf("不是完数");
    }
    return 0;
}