#include <stdio.h>
int main()
{
	double n,x,y,sum;
	scanf("%lf%lf%lf",&n,&x,&y);
	sum=((n/x*y)-n);
	printf("%.4f",sum);
	return 0;
}
