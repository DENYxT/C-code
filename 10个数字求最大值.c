#include <stdio.h>
int main()
{
//��ʮ�������������Ǹ�����
int arr[] = { 1,2,2,3,4,5,6,7,11,9 };
int max = arr[0];//��һ����ʼֵ
int i = 0;
int sz = sizeof(arr) / sizeof(arr[0]);
for ( i = 1; i < sz; i++)//i=1ֱ�Ӵӵڶ���Ԫ�ؿ�ʼ�Ƚϣ���Ϊmax�Ѿ���arr��0����
{
	if (arr[i]>max)
	{
		max = arr[i];
	}
}
printf("���ֵ�ǣ�%d",max);

	return 0;
}
