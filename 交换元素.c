#include <Stdio.h>
void Init(int arr[],int sz)
{
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left<right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int i = 0;
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr,sz);//把数组初始化为0
	Print(arr, sz);
	Reverse(arr,sz);
	Print(arr, sz);
	return 0;
}
