#include<stdio.h>
#include<string.h>
int main(){
	char all[5000]="";
	gets(all);
	char al[1000][1000]={
		""
	};
	int sum=0;

	
	int len;
	
	len=strlen(all);

	int kai=0;
	int mou=0;
	for(int i=0;i<len;i++){
		
		
		if(all[i]==' '){
			if(i==kai){
				
				kai=i+1;
				continue;
			}
			
			char temp[20]="";
			strncpy(temp,all+kai,i-kai);
			int flag = 0;
			
			for(int i1=0;i1<sum;i1++){
				if(strcmp(temp,al[i1])==0){
					flag = 1;
					break;
				}
			}
			if(flag == 0){
				strcpy(al[sum],temp);  
				sum++;
				
			}
			 kai=i+1;
				
		}
		
	}
	if(kai!=len){
		char temp[100]="";
		strncpy(temp,all+kai,len-kai);
		int flag = 0;
		for(int i1=0;i1<sum;i1++){
				if(strcmp(temp,al[i1])==0){
					flag = 1;
					break;
				}
			}
			if(flag == 0){
			sum=sum+1;	
			}	
	}
	printf("%d",sum);
	return 0;
} 
//没有注意到 当最后一个不是空格的请况下 或者 最后一个是和前面相等的情况下
 