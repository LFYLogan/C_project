//题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。　　
#include<stdio.h>
int main()
{
    int number,b,c,d,e,f;
    scanf("%d",&number);
    b=number/10000;
    c=number%10000/1000;
    d=number%1000/100;
    e=number%100/10;
    f=number%10;
    if(b==f&&c==e)
    {
        printf("是回文数");
    }
    else
    {
        printf("不是回文数");
    }
}