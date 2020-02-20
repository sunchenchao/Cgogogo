#include<stdio.h>
#include<string.h>
int main(){
	int a,len=0;
	char all[1000000]="A";
	scanf("%d",&a);
	if(a==1){
		printf("%s",all);
	}else{
		for(int i=1;i<a;i++){
			char cp[1000000]="";
			strcpy(cp,all);
			len=strlen(cp);
			all[len]='A'+i;
			all[len+1]='\0';
			strcat(all,cp);	
			//printf("%s\n",all);
		} 
	}
	printf("%s",all);
	return 0;
	
	
	
} 