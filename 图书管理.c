#include<stdio.h>
#define N 10
struct bookinfo
{
	int bookid;//定义图书编号
	float price;//价格
	int count;//数量	
};

int main()
{
	struct bookinfo bki[N],ss[N],*pp,*yy;
	FILE *fp;
	int i;
	pp=bki;
	if((fp=fopen("aa.txt","w+"))==NULL)
	{
		printf("打不开文件\n");
		exit(1); 
	}
	for(i=0;i<N;i++,pp++)
	{
		printf("请输入第%d本图书的图书编号、价格及库存量:> ",i+1);
		scanf("%d%f%d",&pp->bookid,&pp->price,&pp->count);
	}
	pp=bki;
	fwrite(pp,sizeof(struct bookinfo),N,fp);
	yy=ss;
	rewind(fp);//定位到文件头
	for(i=0;i<N;i++)
	{
		fseek(fp,i*sizeof(struct bookinfo),0);
		fread(yy,sizeof(struct bookinfo),1,fp);
		printf("%d\t%.2f%5d\n",yy->bookid,yy->price,yy->count);
	}
	fclose(fp); 
	return 0;
}
