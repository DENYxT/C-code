#include <stdio.h> 
//int main()
//{
//	int a = 11;
//	a |= (1 << 2);
//	printf("%d\n", a);
//	a &= (~(1 << 2));
//	printf("%d\n", a);
//
//	//int a = 0;
//	////~��(������)λȡ��
//	////00000000 00000000 00000000 00000000
//	////11111111 11111111 11111111 11111111 - ����
//	////11111111 11111111 11111111 11111110 - ����
//	////10000000 00000000 00000000 00000001 - ԭ��
//	////-1
//	//printf("%d", ~a);
//	return 0;
//}


void tes1 (int arr[])
{
	printf("%d\n", sizeof(arr));
}
void tes2 (char ch[])
{
	printf("%d\n", sizeof(ch));

}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	tes1(arr);
	tes2(ch);
	return 0;
}
