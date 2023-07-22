#include <stdio.h>
int My_len(char str[])
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = "123";
	int len = My_len(arr);
	printf("%d\n", len);
	return 0;
} 
