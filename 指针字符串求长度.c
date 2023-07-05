/*
//写一个函数求一个字符串的长度。在main函数中输入字符串，并输出其长度 
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
	printf("请输入一个字符串");
	scanf("%s",st);
	printf("%d\n",lenstr(st));	
}
*/

/*写一个函数，求一个字符串的长度。在main函数中输入字符串，并输出其长度。*/
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
	printf("请输入一个字符串");
	scanf("%s",st);
	printf("%d\n",lenstr(st));
}
