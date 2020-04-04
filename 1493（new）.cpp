#include<stdio.h>
int main(){
	int year,month;
	int M[13]={
		0,31,28,31,30,31,30,31,31,30,31,30,31	
	};
	int M1[13]={
		0,31,29,31,30,31,30,31,31,30,31,30,31	
	};
	scanf("%d%d",&year,&month);
	if(year>=2007){
			int sum=0;
	for(int i=2007;i<year;i++){
		if(i%400==0||(i%4==0&&i%100!=0)){
			sum = sum + 366;
	//		printf("%d\n",sum);
		}else{
			sum = sum + 365;
	//		printf("%d\n",sum);
		}
	} 
	//printf("%d\n",sum);
	int flag;
	if(year%400==0||(year%4==0&&year%100!=0)){
		flag=M1[month];
	//	printf("%d\n",sum);
			for(int i=1;i<month;i++){
				sum=sum+M1[i];	
			}
		}else{
		flag=M[month];
	//	printf("%d\n",sum);
		for(int i=1;i<month;i++){
				sum=sum+M[i];	
			}
		}
	//	printf("%d\n",sum);
		sum = sum%7;
		printf("---------------------\n");
		printf(" Su Mo Tu We Th Fr Sa\n");
		printf("---------------------\n");
	//	printf("%d\n",sum);
		if(sum==6){

			for(int i=1;i<=flag;i++){	
					printf("%3d",i);
					if(i%7==0){
					printf("\n");	
					}		
			}
		}else{
			int come=1+sum;
			for(int i=0;i<come;i++){
				printf("   ");
			}
			for(int i=1;i<=flag;i++){
				come++;	
					printf("%3d",i);
					if(come%7==0&&come!=35){
					printf("\n");	
					}
					//细节 如果出现 2020.2 的情况就会多出现一个空额 就需要 
					//我们来消除  这个就是细节 我发现了只是运气好 多想 
					
				
			}
		}
		printf("\n");
		
		
		printf("---------------------\n");
		
	}

		return 0;
	
} 