#include <stdio.h>
#include <stdlib.h>
//void qsort(void* base, size_t num, size_t size, int (*cmp)(const void* e1, const void* e2));   �⺯��
int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ
	return *(int*)e1 - *(int*)e2;
}
//void* ���͵�ָ�룬���Խ�����������
//void* ���͵�ָ�룬�����Խ��н����ò���
//void* ���͵�ָ�룬�����Խ��мӼ�֤��Ĳ���
int main()
{
	int i;
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
} 
