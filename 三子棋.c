#include <stdio.h>
#include <time.h>
#include <stdlib.h>//给srand引的
#define ROW 3
#define COL 3
//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col );
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//告诉我们四种游戏的状态
// 电脑赢  "*"
// 玩家赢  "#"
// 平局    "Q"
// 继续游戏"C"
char IsWin(char board[ROW][COL], int row, int col);


//游戏模块
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for ( i = 0; i < row; i++)
//	{
//		//1.打印一行的数据
//		printf(" %c | %c | %c \n",board[i][0], board[i][1], board[i][2]);
//		//2.分割行
//		if (i<row-1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.打印一行的数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			printf("|");
		}
		printf("\n");
		//2.分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入要下棋的坐标:>");
		scanf("%d%d", &x, &y);
		//判断x y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	again:
	x = rand()%row;//一个数模取3的值只会是0 1 2
	y = rand()%col;//一个数模取3的值只会是0 1 2
	if (board[x][y] == ' ')
	{
		board[x][y] = '#';
	}
	else
	{
		goto again;
	}
}

//返回1表示棋盘满了，返回0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j]==' ')
			{
				return 0; //满了
			}
		}
	}
	return 1; //没满
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//横三行
	for ( i = 0; i < row; i++)
	{
		if (board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][2]!=' ')
		{
			return board[i][0];
		}
	}
	//竖三列
	for ( i = 0; i < col; i++)
	{
		if (board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[2][i]!=' ')
		{
			return board[0][i];
		}
	}

	//两个对角线
	if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}

	//判断是否平局
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}




//测试三子棋游戏
void menu()//打印一个菜单
{
	printf("************************************\n");
	printf("*****   1.play        0.exit   *****\n");
	printf("************************************\n");
}

//游戏的整个实现
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};//这样修改数组大小更方便
	InitBoard(board,ROW,COL); //初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	//下棋
	while (1)
	{
		//先让玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);//打印棋盘
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//打印棋盘
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}

	if (ret=='*')
	{
		printf("玩家赢\n");
	}
	else if (ret=='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}
void test()//游戏的实现
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input!=0);
}
int main()
{
	test();//创建一个函数
return 0;
}
