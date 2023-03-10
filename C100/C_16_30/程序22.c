//题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
#include<stdio.h>
int main()
{
	int a, b, c;  //a是A的对手 b是B的对手 c是C的对手
		for (a = 'X'; a <= 'Z'; a++)
		{
			for (b = 'X'; b <= 'Z'; b++)
			{
				if (a != b)//避免重复比赛
				{
					for (c = 'X'; c <= 'Z'; c++)
				    {
						if (a != c&&b!=c)//避免重复比赛
						{
							if (a != 'X' && c != 'X' && c != 'Z')
							{
								printf(" A对%c\n B对%c\n C对%c", a, b, c);
							}
						}
					}
				}
			}	
		}	
	return 0;
}