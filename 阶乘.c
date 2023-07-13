#include"stdio.h"
#include"string.h"

int fun(int n){
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}

int main()
{
	int n;
	printf("请输入要求阶乘的数字->");
	scanf("%d",&n);
	printf("%d 的阶乘为: %d",n,fun(n));
}
