#include <stdio.h>
#include <time.h>
//����һ����Ϸ��ͷ�Ĳ˵�
void menu()
{
	printf("************************************\n");
	printf("*****   1->play     0->exit    *****\n");
	printf("************************************\n");
}

//������Ϸ��ʼ�ĺ���
//��Ҫ�õ�
// #include<time.h>
// #include<stdlib.h>


//RAND_MAX 
//0-32767�ķ�Χ


void play()
{
	int guess = 0;
	int ret = 0;//��������
	//1.����һ�������
	//srand(2);//�����������(�������)��Ҳ����Ҫ���
	
	ret = rand()%100+1;//����������ĺ���(1-100)֮���
	//printf("%d\n", ret);//��ӡ������һ�½��
	//2.������
	while (1)
	{
		printf("������:>");
		scanf("%d", &guess);
		if (guess>ret)
		{
			printf("�´�����\n");
		}
		else if (guess<ret)
		{
			printf("��С����\n");
		}
		else
		{
			printf("��ϲ�㣬�¶�����\n");
			break;
		}
	}
}

int main()
{
int input = 0;
srand((unsigned int)time(NULL));
//��������һ��������ʱ�̷����仯��--ʱ��---��ʱ�����---���ڵ�ʱ����1970��1��1��0:0:0������ʱ����Ϊ��λ��
do 
{
	menu();//���ó����˵�
	printf("��ѡ��:>");//��ʾѡ��
	scanf("%d", &input);//����ѡ��
	switch (input)		//�ж���ֵ
	{
	case 1:
		play();//��������Ϸ
		break;
	case 0:
		printf("��Ϸ����");
		break;
	default:
		printf("����������������루����������\n");
		Sleep(3000);
		system("cls");
		break;
	}
} while (input);
	
	
	return 0;
}
