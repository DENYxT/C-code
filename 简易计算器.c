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
		printf("��ѡ��:>");
		scanf("%d", pi);
		switch (*pi)
		{
		case 1:
			printf("����������������:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", add(x, y));
			break;
		case 2:
			printf("����������������:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", sub(x, y));
			break;
		case 3:
			printf("����������������:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", mul(x, y));
			break;
		case 4:
			printf("����������������:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", div(x, y));
			break;
		case 0:
			printf("�˳��С���\n");
			goto out;
			break;
		default:
			printf("ѡ��������������룡\n\n");
			goto ret;
			break;
		}
	} while (input);
out:
	return 0;
} 
