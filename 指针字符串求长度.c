/*
//дһ��������һ���ַ����ĳ��ȡ���main�����������ַ�����������䳤�� 
#include"stdio.h"
#include"string.h"
int lenstr(char* ch)
{
	int len=0;
	while(*ch!='\0')
	{
		len++;
		ch++;
	}
	return len;
}

int main()
{
	char st[20];
	printf("������һ���ַ���");
	scanf("%s",st);
	printf("%d\n",lenstr(st));	
}
*/

/*дһ����������һ���ַ����ĳ��ȡ���main�����������ַ�����������䳤�ȡ�*/
#include<stdio.h>
#include <string.h>
int lenstr(char* ch)
{
  int len=0;
  while(*ch!='\0')
  {
     len++;
      ch++;
  }
   return len;
}

int main()
{
	char st[20]; 
	printf("������һ���ַ���");
	scanf("%s",st);
	printf("%d\n",lenstr(st));
}
