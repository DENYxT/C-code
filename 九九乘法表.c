#include <stdio.h>
int main()
{
//99�˷���
int i,j;
for(i = 1; i <=9; i++)
{
	//��ӡһ��
	for(j = 1; j <=i; j++)
	{
		//��ӡһ��
		printf("%d * %d = %-2d ", i, j, i * j);  //%2d������һ����λ����������λ���ÿո��루-2d��������룩
	}
	printf("\n");
}
	return 0;
 } 
