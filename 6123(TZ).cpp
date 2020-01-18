#include<stdio.h>
int main(){
	int num=0;
	int all[13]={
		0
	};
	int alll[13]={
		0
	};
	int flag=0;
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		scanf("%d",&all[i]);
		alll[all[i]-1]=1;	
	}
	for(int i=0;i<13;i++){
		if(alll[i]!=1){
			if(flag!=0){
				printf(" ");
				
			}
			flag=1;	
			printf("%d",i+1);
		}
		}
	return 0;
	
} 