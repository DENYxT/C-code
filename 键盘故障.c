#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
	char arr[N];
	int i;
	gets(arr);
	printf("%c",arr[0]);
	for(i=1;i<strlen(arr);i++)
	{
		if(arr[i]!=arr[i-1])
		{
			printf("%c",arr[i]);
		}
		else
		{
			continue;
		}
	}
}
