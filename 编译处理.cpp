#include<stdio.h>
#define cout printf
#define cin scanf
int main()
{
	int i=0;
	int *p=&i;
	cout("���������֣�\n"); 
	cin("%d",p); 
	cout("\n\n"); 
	cout("����������ǣ�%d",*p);
} 
