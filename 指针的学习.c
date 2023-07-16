#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pa+1);//int* 的指针步长为4 
//	//指针类型决定了指针走一步走多远-------也就是步长
//	printf("%d\n", pc);
//	printf("%d\n", pc + 1);//char* 的指针步长为1
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

	//int a;//局部变量不初始化，默认是随机值
	////int *p; 局部的指针变量，就被初始化随机值----这个就是野指针

	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		// *(p++)=i;  指针越界后，也会成为野指针
	}
	return 0;
} 
