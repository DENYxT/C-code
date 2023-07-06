#include "stdio.h"
#include "string.h"
int main()
{
	char a[30];
	int k;
	gets(a); 
	for(k=strlen(a)-1;k>=0;k--)
	{
		printf("%c",a[k]); 
	}
}
