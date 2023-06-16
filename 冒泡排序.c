#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz-1;i++) //i确定的是趟数 
	{
		int flag=1;//建立一个变量，判断是否在空运行，占用资源 
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			int tmp=0;
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0; 
			}
		}
		if(flag)
		{
			break;
		}
	}
}
int main()
{
	int arr[10]={9,29,7,0,5,4,30,21,1,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	bubble_sort(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
