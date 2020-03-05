#include<stdio.h>
#include<math.h> 
int main(){
	int sum=0,all[2000];;
	for(int i=2;i<10000;i++){
			int flag=1;
		for(int i2=2;i2<(int)(sqrt(i));i2++){
			if(i%i2==0){
				flag=0;
				break;
			}		
		}
		if(flag==1){
			all[sum]=i;
			sum++;
		}		
			}
			
			
			int a,b;
		scanf("%d%d",&a,&b);
		
		for(int i=a;i<=b;i++){
			printf("%d=",i);
			int cc=i,tt=0;
			while(true){
				
			for(int i2=0;i2<sum;i2++){
				if(cc%all[i2]==0){
					if(tt==0){
						printf("%d",all[i2]);
						cc=cc/all[i2];
						tt=1;
					}else{
						printf("*%d",all[i2]);
						cc=cc/all[i2];
					}
						break;
				}
				
			}
			if(cc==1){
				printf("\n");
				break;
			}
			
		}
		
	}
	return 0;
} 