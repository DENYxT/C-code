#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stu
{
	char name[10];
	int age;
};

void bubble_sort(int* arr, int sz)
{
	int i;
	//趟数
	for ( i = 0; i < sz-1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for ( j = 0; j < sz-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}



//void qsort(void* base, size_t num, size_t size, int (*cmp)(const void* e1, const void* e2));   库函数
int cmp_int(const void* e1, const void* e2)
{
	//比较两个整形值
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void*e1,const void*e2)
{
	return *(float*)e1 - *(float*)e2;
}
int cmp_struct_age(const void*e1,const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_struct_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	 //字符串比较不能直接用大于小于等于来比较，应该用strcmp()函数--字符串比较函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
//void* 类型的指针，可以接收任意类型
//void* 类型的指针，不可以进行解引用操作
//void* 类型的指针，不可以进行加减证书的操作
void test1()
{
	int i;
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test2()
{
	int i;
	float arr[] = { 9.0,8.0,7.0,6.0,5.0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]),cmp_float);
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
}
void test3()
{
	int i;
	struct Stu s[3] = { {"zhangsan",30},{"lisi",40},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct_name);
	for (i = 0; i < sz; i++)
	{
		printf("%s %d\n", s[i].name,s[i].age);
	}
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小-单位是字节
	//第四个参数：函数指针，比较两个元素所用函数的地址-----这个函数使用者自己实现
	//			  函数指针的两个参数是：待排序的两个元素的地址
	//

}

void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for ( i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_Sort(void* base, int sz,int width,int(*cmp)(void*e1,void*e2))
{
	int i = 0;
	int j=0;
	//趟数
	for ( i = 0; i < sz-1; i++)
	{//每一趟的对儿数
		for (j = 0; j < sz-1-i; j++)
		{
			//两个元素进行比较
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}


void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_Sort(arr,sz,sizeof(arr[0]),cmp_int);

}

void test5()
{
	struct Stu s[3] = { {"zhangsan",30},{"lisi",40},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_Sort(s,sz,sizeof(s[0]), cmp_struct_name);


}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();
	return 0;
}
