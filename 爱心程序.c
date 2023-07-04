#include<stdio.h>
#include<Windows.h>
int main()
{
	int z=0;
	float x,y,a;
	for(y=1.5;y>-1.5;y-=0.1)
	{
		for(x=-1.5;x<1.5;x+=0.05)
		{
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0?'*':' ');	
		}
		
		system("color 0c");
		putchar('\n');		
	} 
	
	printf("王凯潼：\n");
	printf("愿你我都能抬头有阳光，眼中有光芒，和最好的人在一起，活成自己喜欢的样子");
	printf("\n\n\n");
	
	printf("按下任意键退出...\n");
	printf("-->");
	scanf("%d",&z);
	 return 0;
 } 
