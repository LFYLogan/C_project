//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include <stdio.h>
int main(void) {
    int count=0,sum=0;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            for(int z=1;z<=4;z++)
            {
                if(i==j||i==z||j==z)
                {
                    continue;
                }
                sum=i*100+j*10+z;
                count++;
                printf("%d\n",sum);
                
            }
        }
    }
    printf("总数：%d",count);


    return 0;
}
