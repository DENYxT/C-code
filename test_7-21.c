#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	//��ַ����ַ�õ��Ľ�����м�Ԫ�صĸ���
//	//�����õ������Ļ���һ���Ǵ��ַ��ȥС��ַ��С��ַ��ȥ���ַ�ľ���ֵ��Ҳ��Ԫ�صĸ���
//	//ǰ��������ָ����ͬһ�����飬������ָ��ͬһ���ռ�
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
