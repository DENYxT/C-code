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
	//����
	for ( i = 0; i < sz-1; i++)
	{
		//һ��ð������
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



//void qsort(void* base, size_t num, size_t size, int (*cmp)(const void* e1, const void* e2));   �⺯��
int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ
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
	//�Ƚ����־��ǱȽ��ַ���
	 //�ַ����Ƚϲ���ֱ���ô���С�ڵ������Ƚϣ�Ӧ����strcmp()����--�ַ����ȽϺ���
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
//void* ���͵�ָ�룬���Խ�����������
//void* ���͵�ָ�룬�����Խ��н����ò���
//void* ���͵�ָ�룬�����Խ��мӼ�֤��Ĳ���
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
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
	//���ĸ�����������ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ-----�������ʹ�����Լ�ʵ��
	//			  ����ָ������������ǣ������������Ԫ�صĵ�ַ
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
	//����
	for ( i = 0; i < sz-1; i++)
	{//ÿһ�˵ĶԶ���
		for (j = 0; j < sz-1-i; j++)
		{
			//����Ԫ�ؽ��бȽ�
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//����
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
