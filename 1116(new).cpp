#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[30];
	while(scanf("%s",a)!=EOF){
		char all[4][5]={
			""
		};
		int l=strlen(a);
		int f=0,kk=0,end=0;
		for(int i=0;i<=l;i++){
			if(a[i]=='.'||a[i]=='\0'){
				strncpy(all[kk],a+f,end);
				end=0;
				f=i+1;
				kk++;
				continue;
			} 
			end++;
		}
		
		int flag=0;
		
		
		
		for(int i=0;i<4;i++){
			int len=0;
			len=strlen(all[i]);
			if(len==0){
				flag=1;
				break;
			}
			for(int l=0;l<len;l++){
				if(all[i][l]<'0'||all[i][l]>'9'){
					flag=1;
					break;
				}
			}
			if(flag==1){
				break;
			}
	
			
		int num=0;
		num=atoi(all[0]);
		if(num==0){
			if(len!=1&&all[i][0]!='0'){
				flag=1;
				break;	
			}	
		}
		if(num<=0||num>=255){
			flag=1;
			break;
		}
		
	}
	if(flag==0){
		printf("Y\n");
	}else{
		printf("N\n");
	}
	} 
	return 0;
	 
}
