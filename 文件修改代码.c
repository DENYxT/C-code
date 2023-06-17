#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	//在这里你需要创建一个名为：“1.txt”(.txt)为 文本文档 
	//当然名字也可以自己修改为其他的，但是代码部分也要修改一下哦 
	if((fp=fopen("1.txt","wt+"))==NULL)
	{
		printf("文件无法打开，按任意键退出！");
		getch();
		exit(1);
	}
	printf("请输入字符串：\n");
	ch=getchar();//循环输入字符 
	while(ch!='\n')
	{
		fputc(ch,fp);//将字符写入文件
		ch=getchar(); 
	}
	rewind(fp);
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	printf("\n");
	fclose(fp);
	
	return 0;
}
