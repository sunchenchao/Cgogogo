#include<stdio.h>
int main(int argc)
{
	char c=getchar();
	if(c!='\n')
	{
		main(0);
		putchar(c);
		//putchar()���Ƕ�ȡһ���ַ���Ȼ������� 
	}
	if(argc)putchar('\n');
	return 0;
}