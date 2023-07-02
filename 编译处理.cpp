#include<stdio.h>
#define cout printf
#define cin scanf
int main()
{
	int i=0;
	int *p=&i;
	cout("请输入数字：\n"); 
	cin("%d",p); 
	cout("\n\n"); 
	cout("输入的数字是：%d",*p);
} 
