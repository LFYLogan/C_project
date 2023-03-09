//题目：输入某年某月某日，判断这一天是这一年的第几天？
#include <stdio.h>
int main(void)
{
    int y,month,d;
    int n_days=0;
    printf("请输入年月日：");
    scanf("%d %d %d",&y,&month,&d);
    for(int m=1;m<month;m++)
    {
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        n_days+=31;
    }
    if(m==4||m==6||m==9||m==11)
    {
        n_days+=30;
    }
    if(m==2)
    {
        if(y%400==0||(y%4==0&&y%100!=0))
        {
            n_days+=29;
        }
        else
        {
            n_days+=28;
        }
    } 
    }
    printf("当年第%d天",n_days+d);
    
}