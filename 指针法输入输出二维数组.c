#include <stdio.h>
int main()
{
int i,j;
int arr [3][4],*p;
p=arr[0];
for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{
		scanf("%d",p++);
	}
}
p=arr[0];
for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%4d ",*p++);
	}
}
return 0;

}
