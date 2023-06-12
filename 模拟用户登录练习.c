#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int main()
{
int i = 0;
char passwd[20] = { 0 };
char* pi = passwd;
for (i = 0; i < 3; i++)
{
	printf("请输入密码:>");
	scanf("%s", pi);
	/*strcmp:比较两个字符串的大小，一个字符一个字符比较，按ASCLL码比较
	标准规定：
	第一个字符串大于第二个字符串，则返回大于0的数字
	第一个字符串等于第二个字符串，则返回0
	第一个字符串小于第二个字符串，则返回小于0的数字
	*/
	// == 不能用来比较两个字符串是否相等，应该使用一个库函数->strcmp();
	if (strcmp(pi, "123456") == 0)  //strcmp(str1,str2)：str1与str2比较，两个字符串相符就返回0
	{
		printf("登录成功");
		break;
	}
	else
	{
		printf("密码错误，请重试");
		Sleep(1000);
		system("cls");
	}
}
if (i == 3)
{
	printf("登录失败，三次密码均输入错误");
}
}
