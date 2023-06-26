#include <stdio.h>
int main()
{
//打印100-200之间的素数
int i = 100;
int j = 2;
for ( i = 100; i <=200; i++)
{
	//判断i是否为素数：判断条件：
	// 1.试除法--产生2到i-1的数字
	for ( j = 2; j < i; j++)  //j就是2到i-1的范围
	{
		if (i%j==0)
		{
			break;
		}
	}

	if (i == j)
	{
		printf("%d 是素数\n", i);
	}
}
	return 0;
}
