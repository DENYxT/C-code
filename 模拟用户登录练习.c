#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int main()
{
int i = 0;
char passwd[20] = { 0 };
char* pi = passwd;
for (i = 0; i < 3; i++)
{
	printf("����������:>");
	scanf("%s", pi);
	/*strcmp:�Ƚ������ַ����Ĵ�С��һ���ַ�һ���ַ��Ƚϣ���ASCLL��Ƚ�
	��׼�涨��
	��һ���ַ������ڵڶ����ַ������򷵻ش���0������
	��һ���ַ������ڵڶ����ַ������򷵻�0
	��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
	*/
	// == ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��->strcmp();
	if (strcmp(pi, "123456") == 0)  //strcmp(str1,str2)��str1��str2�Ƚϣ������ַ�������ͷ���0
	{
		printf("��¼�ɹ�");
		break;
	}
	else
	{
		printf("�������������");
		Sleep(1000);
		system("cls");
	}
}
if (i == 3)
{
	printf("��¼ʧ�ܣ�����������������");
}
}
