#include <stdio.h>
int main()
{
int k = 10;
int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
int sz = sizeof(arr) / sizeof(arr[0]);
int left = 0;
int right = sz - 1;

while (left <= right)
{
	int mid = (left + right) / 2;
	if (arr[mid] > k)
	{
		right = mid - 1;
	}
	else if (arr[mid] < k)
	{
		left = mid + 1;
	}
	else
	{
		printf("�ҵ��ˣ��±���%d", mid);
		break;
	}
}
if (left > right)
{
	printf("�Ҳ������Ԫ��");
}
	return 0;
 } 
