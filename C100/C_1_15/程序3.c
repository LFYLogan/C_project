//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i;
    int x=0,y=0;
    for(i=1;i<=1000;i++)
    {
        x = sqrt(i+100);
        y = sqrt(i+100+168);
        if(x*x==(i+100)&&y*y==(i+100+168))
        {
            printf("%d\n",i);
        }
    }
}