#include<stdio.h>
#include<string.h>
int main(){
	char a[6]="";
	scanf("%s",a);
	int len=0;
	len=strlen(a);
	printf("%d\n",len);
	for(int i=0;i<len;i++){
		if(i!=0){
			printf(" ");	
		}
		printf("%c",a[i]);
	}
	printf("\n");
	for(int i=len-1;i>=0;i--){
		printf("%c",a[i]);
	}
	return 0;
}