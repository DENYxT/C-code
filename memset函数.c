#include <stdio.h>
#include <string.h>
int main ()
{
char arr1[] = "hello world";
memset(arr1,'*',5);//（要改变值的地址，要改变的值，改变几个）
printf("%s", arr1);

char str[] = "almost every programmer should know memset!";
memset(str, '-', 6);//把数组str  前6个字符  换成了‘-’
puts(str);
	
	return 0;
}
