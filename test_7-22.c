#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr-&������--������������Ԫ�ص�ַ &������->ȡ��������������ĵ�ַ
//	//2.sizeof(arr)-sizeof(������) - ��������ʾ�����������飬���������������Ĵ�С
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	return 0;
//}

int main()
{
	//ָ������ - ����������--���ָ�������
	//����ָ�� - ������ָ��
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;*/
	//��������--�������
	//�ַ�����--����ַ�
	//ָ������--���ָ��
	int* arr[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	return 0;
} 
