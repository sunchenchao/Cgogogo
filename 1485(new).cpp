#include<stdio.h>
#include <math.h>
int main(){
	
	int a;
	int sum=3;
	long long int all =2;
	scanf("%d",&a);
	a=a-1;
	while(a){
		int flag=0;
		for(int i=2;i<=sqrt(sum)+1;i++){
			if(sum%i==0){
				flag=1;
				break;					
			}
		}
		if(flag==0){
			//printf(" %d\n",sum);
			all=all*sum%50000;			
				a--;	
			}
		sum++;
	}
	

	printf("%d",all);
	return 0;
} 