#include <stdio.h>
void menu()
{
	printf("*************************************************\n");
	printf("****************1.add  2.sub*********************\n");
	printf("****************3.mul  4.div*********************\n");
	printf("****************** 0.exit ***********************\n");
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}
int main()
{
	int input;
	int* pi = &input;
	int x, y;
	int* px = &x, * py = &y;
	int (*ptarr[5])(int, int) = {0,add,sub,mul,div};
	do
	{
ret:
		menu();
		printf("请选择:>");
		scanf("%d", pi);
		if (*pi >= 1 && *pi <= 4)
		{
			printf("请输入两个操作数:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", ptarr[input](*(px), *(py)));
		}
		else if (input == 0)
		{
			printf("退出中……\n\n");
			goto out;
		}
		else
		{
			printf("输入错误，请重新输入\n\n");
			goto ret;
		}
		
	} while (input);
out:
	return 0;
}
