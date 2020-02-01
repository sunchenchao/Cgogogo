#include<stdio.h>
#include<string.h>
int main(){
	int a,b;
	int ff=1;
	while(true){
		scanf("%d%d",&a,&b);
		if(a==0&&b==0){
			break;
		}
		char all[a][b+1];
		int num[a][b];
		for(int i=0;i<a;i++){
			scanf("%s",&all[i]);
		}
		for(int i=0;i<a;i++){
			
			for(int ii=0;ii<b;ii++){
				int sum=0;
				if(all[i][ii]=='*'){
					num[i][ii]=9;
					continue;
				}
				if(all[i-1][ii-1]=='*'){
					sum++;
				}
				if(all[i-1][ii]=='*'){
					sum++;
				}
				if(all[i-1][ii+1]=='*'){
					sum++;
				}
				if(all[i][ii-1]=='*'){
					sum++;
				}
				if(all[i][ii+1]=='*'){
					sum++;
				}
				if(all[i+1][ii-1]=='*'){
					sum++;
				}
				if(all[i+1][ii]=='*'){
					sum++;
				}
				if(all[i+1][ii+1]=='*'){
					sum++;
				}
				num[i][ii]=sum;
			}
			
		}
		printf("Field #%d:\n",ff);
		ff++;
		for(int i=0;i<a;i++){
			for(int ii=0;ii<b;ii++){
				if(num[i][ii]==9){
					printf("*");
				}else{
					printf("%d",num[i][ii]);
				}
				
				
			}
			printf("\n");
		}
		printf("\n");
		
		
	}
	return 0;
} 