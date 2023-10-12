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
ret:
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", pi);
		switch (*pi)
		{
		case 1:
			printf("请输入两个操作数:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", add(x, y));
			break;
		case 2:
			printf("请输入两个操作数:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", sub(x, y));
			break;
		case 3:
			printf("请输入两个操作数:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", mul(x, y));
			break;
		case 4:
			printf("请输入两个操作数:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", div(x, y));
			break;
		case 0:
			printf("退出中……\n");
			goto out;
			break;
		default:
			printf("选择错误请重新输入！\n\n");
			goto ret;
			break;
		}
	} while (input);
out:
	return 0;
} 
