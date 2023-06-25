#include <stdio.h>
//输入三个数字，让其从大到小输出
int main()
{
	//输入三个数字，让其从大到小输出
	int a = 0;
	int b = 0;
	int c = 0;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	scanf("%d %d %d", pa, pb, pc);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a<c)
	{
		int tmp = a;
		a = c;
		c = tmp;

	}
	if (b<c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", *pa, *pb, *pc);

	return 0;
}


