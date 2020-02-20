#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
int main(){
	char nnn[6]="";
	gets(nnn);
	int n=0;
	n=atoi(nnn);
//	printf("%d\n",n);

	char all[10000]="";
	int num[10000];
	int sum=0;
	for(int ii=0;ii<n;ii++){
		gets(all);
		int len=strlen(all);
		char tmp[10]="";
		int flag=0;
		for(int i=0;i<len;i++){
			if(all[i]!=' '){
				tmp[flag++]=all[i];
			}else{
				if(flag!=0){
					flag=0;
					num[sum++]=atoi(tmp);
			
					memset(tmp, ' ', sizeof(tmp));
				}
			}
			
			
		}
		
		
	}


	qsort(num,sum,sizeof(num[0]),cmp);
	for(int i=0;i<sum;i++){
		printf("%d\n",num[i]);
	}

	int mm,nn;
	for(int i=1;i<sum-1;i++){
	
		if(num[i]-2==num[i-1]){
			mm=num[i]-1;
			break;
		}
	
	}
		for(int i=1;i<sum-1;i++){
		if(num[i]==num[i-1]){
			
			nn=num[i];
			break;
		}
		
	}
	
	
	printf("%d %d",mm,nn);
	
	return 0;
} 
