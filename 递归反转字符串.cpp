#include<stdio.h>
int main(int argc)
{
	char c=getchar();
	if(c!='\n')
	{
		main(0);
		putchar(c);
		//putchar()就是读取一个字符串然后输出来 
	}
	if(argc)putchar('\n');
	return 0;
}