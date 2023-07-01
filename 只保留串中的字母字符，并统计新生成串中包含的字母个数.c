#include <stdio.h>
//例如：输入的字符串为ab234$df4，新生成的串为abdf 

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
printf("请输入字符串:");
gets(str); 
s=fun(str);  
printf("新字符串为:");  
puts(str); 
printf("新字符串中包含的字符数为：%d\n",s);

return 0;
}
