#include <stdio.h>
#include <string.h>
int main ()
{
char arr1[] = "hello world";
memset(arr1,'*',5);//��Ҫ�ı�ֵ�ĵ�ַ��Ҫ�ı��ֵ���ı伸����
printf("%s", arr1);

char str[] = "almost every programmer should know memset!";
memset(str, '-', 6);//������str  ǰ6���ַ�  �����ˡ�-��
puts(str);
	
	return 0;
}
