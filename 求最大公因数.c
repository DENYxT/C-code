#include <stdio.h>
int main()
{
int m = 0;
int n = 0;
int r = 0;
scanf("%d", &m);
scanf("%d", &n);
while (m % n != 0)  //其实不用打这个！=0 因为while循环（）里的值只有为1时才会执行，如果是0的话就不会执行这个语句了
{
	r = m % n;
	m = n;
	n = r;
}
printf("最大公因数是：%d", n);
	return 0;
}
