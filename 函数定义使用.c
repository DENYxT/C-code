#include <stdio.h>
int main()
{
	//1.设计一个函数，将：年/月/日  改变成：年-月-日 
	void covert();
	
	covert();
	
	//2.用递归函数计算 1!+3!+5!……n！ （n为奇数） 
	int fn(int);  //声明这个方法 	
	int i,n;
	int sum=0;
	printf("请输入n的值：");
	scanf("%d",&n);
	
	for(i=1;i<=n;i+=2)
	{
		sum+=fn(i);
	}
	printf("结果为：%d\n",sum);
	
	
}



void covert()
{
	char ch;
	printf("请输入时间:");
	while((ch=getchar())!='\n')
	{
		if (ch=='/')
		{
			ch='-';
		}
		printf("%c",ch);
	}
	
	
	
	
	int fn(int n)
	{
		if(n==1)
		{
			return 1;
		}
		else
		{
			return n*fn(n-1);
		}
	}
	
	
	
}
