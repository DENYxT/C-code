#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//首元素地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr-&数组名--数组名不是首元素地址 &数组名->取出的是整个数组的地址
//	//2.sizeof(arr)-sizeof(数组名) - 数组名表示的是整个数组，计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	return 0;
//}

int main()
{
	//指针数组 - 本质是数组--存放指针的数组
	//数组指针 - 本质是指针
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;*/
	//整形数组--存放整形
	//字符数组--存放字符
	//指针数组--存放指针
	int* arr[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	return 0;
} 
