#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
char arr1[] = "welcome to wangkaitong.com";
char arr2[] = "##########################";
int letf = 0;
int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
printf("%s\n", arr2);
while (letf <= right)
{
	arr2[letf] = arr1[letf];
	arr2[right] = arr1[right];
	//��Ϣһ��  sleep��λ�Ǻ��루Windows.h��
	Sleep(1000);//��Ϣһ��
	system("cls"); //ִ��ϵͳ����ĺ���(cls-�����Ļ)��ͷ�ļ���stdlib.h��
	printf("%s\n", arr2);
	letf++;
	right--;
}
}
