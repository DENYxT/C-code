#include <stdio.h>
int main()
{
	//1.���һ��������������/��/��  �ı�ɣ���-��-�� 
	void covert();
	
	covert();
	
	//2.�õݹ麯������ 1!+3!+5!����n�� ��nΪ������ 
	int fn(int);  //����������� 	
	int i,n;
	int sum=0;
	printf("������n��ֵ��");
	scanf("%d",&n);
	
	for(i=1;i<=n;i+=2)
	{
		sum+=fn(i);
	}
	printf("���Ϊ��%d\n",sum);
	
	
}



void covert()
{
	char ch;
	printf("������ʱ��:");
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
