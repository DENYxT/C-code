#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	//地址减地址得到的结果是中间元素的个数
//	//如果想得到个数的话那一定是大地址减去小地址，小地址减去大地址的绝对值，也是元素的个数
//	//前提是两个指针是同一个数组，或者是指向同一个空间
//	return 0;
//}

int My_len(char str[])
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "wkt";
	int len = My_len(arr);
	printf("%d\n", len);
	return 0;
}
