#include <stdio.h>
int main()
{
int m = 0;
int n = 0;
int r = 0;
scanf("%d", &m);
scanf("%d", &n);
while (m % n != 0)  //��ʵ���ô������=0 ��Ϊwhileѭ���������ֵֻ��Ϊ1ʱ�Ż�ִ�У������0�Ļ��Ͳ���ִ����������
{
	r = m % n;
	m = n;
	n = r;
}
printf("��������ǣ�%d", n);
	return 0;
}
