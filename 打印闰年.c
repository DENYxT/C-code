#include <stdio.h>
//��ӡ1000-2000֮�������
//1.�ܱ�4�������ܱ�100�������ܱ�400����
int main()
{
int count = 0;
int year = 1000;
for ( year = 1000; year < 2001; year++)
{
	if (year%4==0&&year%100!=0)
	{
		printf("%d��������\n", year);
		count++;
	}
	else if (year%400==0)
	{
		printf("%d��������\n\n", year);
		count++;
	}
}
if (year==2001)
{
	printf("����ĸ����ǣ�%d", count);
}
return 0;
}
