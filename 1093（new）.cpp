#include<stdio.h>
#include<string.h>
int main(){
	char a[101];
	gets(a);
	int len=strlen(a);
	//printf("%d",len);
	for(int i=len-1;i>=0;i--){
		printf("%c",a[i]);
	}
}
//ʹ��gets��ȡ���ո���ַ��� 