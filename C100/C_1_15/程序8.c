//题目：输出9*9口诀。
#include <stdio.h>
int main(void)
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d*%d=%d ",j,i,i*j);
        }
        printf("\n");
    }
}