#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pa+1);//int* ��ָ�벽��Ϊ4 
//	//ָ�����;�����ָ����һ���߶�Զ-------Ҳ���ǲ���
//	printf("%d\n", pc);
//	printf("%d\n", pc + 1);//char* ��ָ�벽��Ϊ1
//	return 0;
//}

int main()
{
	/*int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}*/

	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
	////int *p; �ֲ���ָ��������ͱ���ʼ�����ֵ----�������Ұָ��

	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		// *(p++)=i;  ָ��Խ���Ҳ���ΪҰָ��
	}
	return 0;
} 
