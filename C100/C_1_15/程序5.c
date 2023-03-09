//题目：输入三个整数x,y,z，请把这三个数由小到大输出
#include <stdio.h>
int main() 
{ 
int x,y,z,t; 
scanf("%d%d%d",&x,&y,&z); 
if (x>y) 
{
    t=x;x=y;y=t;
} /*交换x,y的值*/ 
if(x>z) 
{
    t=z;z=x;x=t;
}/*交换x,z的值*/ 
if(y>z) 
{
    t=y;y=z;z=t;}/*交换z,y的值*/ 
    printf("small to big: %d %d %d\n",x,y,z); 
}
