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
		printf("��ѡ��:>");
		scanf("%d", pi);
		if (*pi >= 1 && *pi <= 4)
		{
			printf("����������������:>");
			scanf("%d", px);
			scanf("%d", py);
			printf("%d\n\n", ptarr[input](*(px), *(py)));
		}
		else if (input == 0)
		{
			printf("�˳��С���\n\n");
			goto out;
		}
		else
		{
			printf("�����������������\n\n");
			goto ret;
		}
		
	} while (input);
out:
	return 0;
}
