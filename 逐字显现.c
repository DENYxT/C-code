#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
char arr1[] = "welcome to wangkaitong.com";
char arr2[] = "##########################";
int letf = 0;
int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
printf("%s\n", arr2);
while (letf <= right)
{
	arr2[letf] = arr1[letf];
	arr2[right] = arr1[right];
	//休息一秒  sleep单位是毫秒（Windows.h）
	Sleep(1000);//休息一秒
	system("cls"); //执行系统命令的函数(cls-清空屏幕)：头文件（stdlib.h）
	printf("%s\n", arr2);
	letf++;
	right--;
}
}
