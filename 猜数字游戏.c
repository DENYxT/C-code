#include <stdio.h>
#include <time.h>
//定义一个游戏开头的菜单
void menu()
{
	printf("************************************\n");
	printf("*****   1->play     0->exit    *****\n");
	printf("************************************\n");
}

//定义游戏开始的函数
//需要用到
// #include<time.h>
// #include<stdlib.h>


//RAND_MAX 
//0-32767的范围


void play()
{
	int guess = 0;
	int ret = 0;//存放随机数
	//1.生成一个随机数
	//srand(2);//这里给的数字(当作起点)，也是需要变的
	
	ret = rand()%100+1;//生成随机数的函数(1-100)之间的
	//printf("%d\n", ret);//打印出来看一下结果
	//2.猜数字
	while (1)
	{
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess>ret)
		{
			printf("猜大啦！\n");
		}
		else if (guess<ret)
		{
			printf("猜小啦！\n");
		}
		else
		{
			printf("恭喜你，猜对啦！\n");
			break;
		}
	}
}

int main()
{
int input = 0;
srand((unsigned int)time(NULL));
//电脑上有一个东西是时刻发生变化的--时间---“时间戳”---现在的时间与1970年1月1日0:0:0产生的时间差（秒为单位）
do 
{
	menu();//调用出来菜单
	printf("请选择:>");//提示选择
	scanf("%d", &input);//接收选择
	switch (input)		//判断收值
	{
	case 1:
		play();//猜数字游戏
		break;
	case 0:
		printf("游戏结束");
		break;
	default:
		printf("输入错误，请重新输入（即将清屏）\n");
		Sleep(3000);
		system("cls");
		break;
	}
} while (input);
	
	
	return 0;
}
