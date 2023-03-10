//题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
#include<stdio.h>
int main(void)
{
    int n,t,number=20;
    float a=2,b=1,s=0;
    for(n=1;n<=number;n++)
    {
        s=s+a/b;
        t=a;a=a+b;b=t;/*这部分是程序的关键，请读者猜猜t的作用*/
    }
    printf("sum is %9.6f\n",s);
}