#include <stdio.h>
int main()
{
//��ӡ100-200֮�������
int i = 100;
int j = 2;
for ( i = 100; i <=200; i++)
{
	//�ж�i�Ƿ�Ϊ�������ж�������
	// 1.�Գ���--����2��i-1������
	for ( j = 2; j < i; j++)  //j����2��i-1�ķ�Χ
	{
		if (i%j==0)
		{
			break;
		}
	}

	if (i == j)
	{
		printf("%d ������\n", i);
	}
}
	return 0;
}
