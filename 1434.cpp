#include<stdio.h>
int main(){
	int num,sum=0;
	scanf("%d",&num);
	for(int i=10000;i<100000;i++){
		int ge=0,shi=0,bai=0,qian=0,wan=0;
		ge=i%10;
		shi=i/10%10;
		bai=i/100%10;
		qian=i/1000%10;
		wan=i/10000;
		if(ge==wan&&shi==qian){
			if(num==ge+shi+bai+qian+wan){
				printf("%d\n",i);
				sum++;
			}
			
		}
	}
	for(int i=100000;i<1000000;i++){
		int ge=0,shi=0,bai=0,qian=0,wan=0,swan=0;
		ge=i%10;
		shi=i/10%10;
		bai=i/100%10;
		qian=i/1000%10;
		wan=i/10000%10;
		swan=i/100000; 
		if(ge==swan&&shi==wan&&bai==qian){
			if(num==ge+shi+bai+qian+wan+swan){
				printf("%d\n",i);
				sum++;
			}
			
		}
	}
	if(sum==0){
		printf("-1\n");
	}
	return 0;
} 