#include<stdio.h>
#include<string.h>
int main(){
	char a[30]="";
	
	while(scanf("%s",a)!=EOF){
		
		
		int len,sum=0;
		len=strlen(a);
		for(int i=0;i<len;i++){
			sum=a[i]-48+sum;
		}
		printf("%d\n",sum);
	}
	return 0;
} 