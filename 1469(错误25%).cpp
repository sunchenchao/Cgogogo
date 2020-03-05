#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[10][10]={
		"ling ","yi ","er ","san ","si ","wu ","liu ","qi ","ba ","jiu "
	},b[10][10]={"","shi ","bai ","qian ","wan ","shi ","bai ","quan ","yi ","shi "};
	char all[11]="";
	scanf("%s",&all);
	int len=strlen(all);
	int flag =0;
	for(int i=0;i<len;i++){
		int t=all[i]-48;
		//少当十位上1的时候就直接输出十 不用输出其他的
		
		 if(len==1&&t==0){
 			printf("ling");
 		}
		
		if(t==0){
			flag=1;	
			if(4==len-i-1){
				printf("wan ");
				flag=0;
			}
			if(len-i-1==8){
				printf("yi ");
				flag=0;
			}				
		}else{
			
			if(flag==1){		
				printf("ling ");	
				flag =0;	
			}
			if(1==len-i-1 && t==1 && len==2 || 5==len-i-1 && t==1 && len ==6 || 9==len-i-1 && t==1 && len==10){
				printf("shi ");
				continue;
			}	
			printf("%s%s",a[t],b[len-1-i]);
			flag==0;
		}
		
		
		
	}
	return 0;
	
	//以完成修改 一定要分析完成之后在来 统计所有的情况 
} 