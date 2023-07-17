#include <stdio.h>
int main()
{
	//int ch = getchar();//接收一个键盘的字符
//putchar(ch);//输出接收的（）字符
////等价于：printf("%c\n",ch);


//int ch = 0;
//ctlr + z 就会获取到EOF
//EOF：end of file -> -1(值)    文件结束标志
//while ((ch = getchar()) != EOF)
//{
//	putchar(ch);
//}


//int ret = 0;
//char passwd[20] = { 0 };
//char* pd = passwd;
//printf("请输入密码:>\n");
//scanf("%s", pd);

//缓冲区还剩余一个\n

//这是另一个方法（自写）
//while (1)
//{
//	if (getchar() != '\n')
//	{
//		getchar();
//	}
//	else if (getchar() == '\n')
//	{
//		break;
//	}
//}

//while ((ch = getchar()) != '\n')
//{
//	;//空语句
//}
//
//printf("请确认密码（Y/N）:>\n");
//ret = getchar();
//
//if (ret == 'Y')
//{
//	printf("确认成功\n");
//	printf("密码是：%s", pd);
//}else 
//{
//	printf("放弃确认\n");
//	printf("密码是：%s", pd);
//}

//printf("%d", '\n');  \n这个字符的ASCII码值是10
//也就是为什么ret的值会是10的原因



//int ch = 0;
//while ((ch=getchar())!=EOF)
//{
//	if (ch<'0'||ch>'9')
//	{
//		continue;
//	}else
//	{
//		putchar(ch);
//	}
//}
	
	
	reuturn 0;
}
