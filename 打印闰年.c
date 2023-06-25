#include <stdio.h>
//打印1000-2000之间的闰年
//1.能被4整除不能被100整除、能被400整除
int main()
{
int count = 0;
int year = 1000;
for ( year = 1000; year < 2001; year++)
{
	if (year%4==0&&year%100!=0)
	{
		printf("%d年是闰年\n", year);
		count++;
	}
	else if (year%400==0)
	{
		printf("%d年是闰年\n\n", year);
		count++;
	}
}
if (year==2001)
{
	printf("闰年的个数是：%d", count);
}
return 0;
}
