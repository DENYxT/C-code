#include <stdio.h>
int main()
{
//求十个数字中最大的那个数字
int arr[] = { 1,2,2,3,4,5,6,7,11,9 };
int max = arr[0];//附一个初始值
int i = 0;
int sz = sizeof(arr) / sizeof(arr[0]);
for ( i = 1; i < sz; i++)//i=1直接从第二个元素开始比较，因为max已经是arr【0】了
{
	if (arr[i]>max)
	{
		max = arr[i];
	}
}
printf("最大值是：%d",max);

	return 0;
}
