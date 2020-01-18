#include<stdio.h>
#include<string.h>
int main(){
	int num;
	scanf("%d",&num);
	
	for(int i=0;i<num;i++){
		char kk[22]="";
		scanf("%s",kk);
		int len=strlen(kk);
		for(int ii=0;ii<len;ii++){
			if(kk[ii]<48||kk[ii]>57){
				printf("%c",kk[ii]);
				
			}
		}
		printf("\n");
		
	}
	return 0;
	
}