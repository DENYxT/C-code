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
	printf("������Ҫ��׳˵�����->");
	scanf("%d",&n);
	printf("%d �Ľ׳�Ϊ: %d",n,fun(n));
}
