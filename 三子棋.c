#include <stdio.h>
#include <time.h>
#include <stdlib.h>//��srand����
#define ROW 3
#define COL 3
//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col );
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//��������������Ϸ��״̬
// ����Ӯ  "*"
// ���Ӯ  "#"
// ƽ��    "Q"
// ������Ϸ"C"
char IsWin(char board[ROW][COL], int row, int col);


//��Ϸģ��
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
//		//1.��ӡһ�е�����
//		printf(" %c | %c | %c \n",board[i][0], board[i][1], board[i][2]);
//		//2.�ָ���
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
		//1.��ӡһ�е�����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			printf("|");
		}
		printf("\n");
		//2.�ָ���
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
	printf("�����:>\n");
	while (1)
	{
		printf("������Ҫ���������:>");
		scanf("%d%d", &x, &y);
		//�ж�x y����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	again:
	x = rand()%row;//һ����ģȡ3��ֵֻ����0 1 2
	y = rand()%col;//һ����ģȡ3��ֵֻ����0 1 2
	if (board[x][y] == ' ')
	{
		board[x][y] = '#';
	}
	else
	{
		goto again;
	}
}

//����1��ʾ�������ˣ�����0��ʾ����û��
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
				return 0; //����
			}
		}
	}
	return 1; //û��
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//������
	for ( i = 0; i < row; i++)
	{
		if (board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][2]!=' ')
		{
			return board[i][0];
		}
	}
	//������
	for ( i = 0; i < col; i++)
	{
		if (board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[2][i]!=' ')
		{
			return board[0][i];
		}
	}

	//�����Խ���
	if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}

	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}




//������������Ϸ
void menu()//��ӡһ���˵�
{
	printf("************************************\n");
	printf("*****   1.play        0.exit   *****\n");
	printf("************************************\n");
}

//��Ϸ������ʵ��
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};//�����޸������С������
	InitBoard(board,ROW,COL); //��ʼ������
	DisplayBoard(board,ROW,COL);//��ӡ����
	//����
	while (1)
	{
		//�����������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);//��ӡ����
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//��ӡ����
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}

	if (ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if (ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
void test()//��Ϸ��ʵ��
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input!=0);
}
int main()
{
	test();//����һ������
return 0;
}
