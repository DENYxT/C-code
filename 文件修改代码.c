#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	//����������Ҫ����һ����Ϊ����1.txt��(.txt)Ϊ �ı��ĵ� 
	//��Ȼ����Ҳ�����Լ��޸�Ϊ�����ģ����Ǵ��벿��ҲҪ�޸�һ��Ŷ 
	if((fp=fopen("1.txt","wt+"))==NULL)
	{
		printf("�ļ��޷��򿪣���������˳���");
		getch();
		exit(1);
	}
	printf("�������ַ�����\n");
	ch=getchar();//ѭ�������ַ� 
	while(ch!='\n')
	{
		fputc(ch,fp);//���ַ�д���ļ�
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
