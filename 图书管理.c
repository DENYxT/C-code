#include<stdio.h>
#define N 10
struct bookinfo
{
	int bookid;//����ͼ����
	float price;//�۸�
	int count;//����	
};

int main()
{
	struct bookinfo bki[N],ss[N],*pp,*yy;
	FILE *fp;
	int i;
	pp=bki;
	if((fp=fopen("aa.txt","w+"))==NULL)
	{
		printf("�򲻿��ļ�\n");
		exit(1); 
	}
	for(i=0;i<N;i++,pp++)
	{
		printf("�������%d��ͼ���ͼ���š��۸񼰿����:> ",i+1);
		scanf("%d%f%d",&pp->bookid,&pp->price,&pp->count);
	}
	pp=bki;
	fwrite(pp,sizeof(struct bookinfo),N,fp);
	yy=ss;
	rewind(fp);//��λ���ļ�ͷ
	for(i=0;i<N;i++)
	{
		fseek(fp,i*sizeof(struct bookinfo),0);
		fread(yy,sizeof(struct bookinfo),1,fp);
		printf("%d\t%.2f%5d\n",yy->bookid,yy->price,yy->count);
	}
	fclose(fp); 
	return 0;
}
