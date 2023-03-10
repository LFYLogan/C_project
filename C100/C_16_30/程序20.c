//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
#include<stdio.h>
int main()
{
    float height=100;
    int n=10;
    float sum_height=0;
    for(int i=1;i<=3;i++)
    {
        if(i==1)
            sum_height=sum_height+height;
        else
         sum_height=sum_height+height*2;
        height=height/2;
    }
    printf("落地10次共多少米：%f\n",sum_height);
    printf("第10次反弹多少米%f",height);
}