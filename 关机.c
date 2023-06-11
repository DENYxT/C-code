#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int* pi = &i;
	char input[100] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在一分钟后关机，如果输入“我是猪”就取消关机\n请输入：>");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("成功取消，别担心\n");
	zaiyici:
		printf("输入“1”即可退出，或直接关闭窗口\n");
		scanf("%d", pi);
		if (*pi == 1)
		{
			goto tuichu;
		}
		else
		{
			printf("输入错误请重新输入\n");	
			goto zaiyici;
		}
	}
	else
	{
		goto again;
	}

tuichu:
	return 0;
 } 
