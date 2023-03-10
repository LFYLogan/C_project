//题目：求1+2!+3!+...+20!的和
#include<stdio.h>
int main(void)
{
    float sum=0,temp=1,i;
    for(i=1;i<=20;i++)
    {
        temp*=i;
        sum+=temp;
    }
    printf("%f",sum);
}