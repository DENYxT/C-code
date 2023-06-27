#include <stdio.h>
int main()
{
//99乘法表
int i,j;
for(i = 1; i <=9; i++)
{
	//打印一行
	for(j = 1; j <=i; j++)
	{
		//打印一列
		printf("%d * %d = %-2d ", i, j, i * j);  //%2d代表是一个两位数，不足两位的用空格补齐（-2d就是左对齐）
	}
	printf("\n");
}
	return 0;
 } 
