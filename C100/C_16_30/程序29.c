//题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
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

    if(b!=0)
    {
      printf("逆序数：%d%d%d%d%d",f,e,d,c,b);
    }
    else if(c!=0)
    {
      printf("逆序数：%d%d%d%d",f,e,d,c);
    }
    else if(d!=0)
    {
      printf("逆序数：%d%d%d",f,e,d);
    }
    else if(e!=0)
    {
      printf("逆序数：%d%d",f,e);
    }
    else if(f!=0)
    {
      printf("逆序数：%d",f);
    }
}