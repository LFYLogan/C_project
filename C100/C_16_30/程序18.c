//题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,sum=0;
	int i;
	printf("请输入你要求几个数相加（格式：x）：\n");
	scanf("%d",&n);
	printf("这个数是几呢？\n");
	scanf("%d",&m);

	for(i=1;i<=n;i++)
	{
		sum=sum+m;
//		printf("sum%d=%d\n",i,sum);//用于理解每一步的sum等于多少 
		m=m+m*pow(10,i);
	}
	printf("总的sum=%d",sum);
	return 0;
}