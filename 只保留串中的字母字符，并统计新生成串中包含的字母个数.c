#include <stdio.h>
//���磺������ַ���Ϊab234$df4�������ɵĴ�Ϊabdf 

fun(char *ptr)
{ 
int i,j;
for(i=0,j=0;*(ptr+i)!='\0';i++) 
if(*(ptr+i)<='z'&& *(ptr+i)>='a'||*(ptr+i)<='Z' && *(ptr+i)>='A') 
{
    *(ptr+j)=*(ptr+i);    j++; 
} 
	*(ptr+j)='\0';
  return(j);
}
int main()
{
char str[50];  
int s;
printf("�������ַ���:");
gets(str); 
s=fun(str);  
printf("���ַ���Ϊ:");  
puts(str); 
printf("���ַ����а������ַ���Ϊ��%d\n",s);

return 0;
}
