#include <stdio.h>
#include <string.h>
int main()
{
	int i,j;
	char arr[5];
	scanf("%s",arr);
	int a=strlen(arr);
	printf("%d\n",a);
	for(i=0;i<5;i++)
	{
		printf("%c ",arr[i]);
	}
	printf("\n");
	for(j=4;j>=0;j--)
	{
	printf("%c",arr[j]);

	}
	printf("\n");

	
	
	
	
	
	
	
  return 0;
}
