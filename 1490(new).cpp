#include<stdio.h>
int main(){
	int a[10]={
		0,1,32,243,1024,3125,7766,16807,32768,59049
	};
	for(int i=1;i<10000000;i++){
		int sum=i;
		int all =0;
		while(sum){
			int temp=sum%10;
			all =all +a[temp];
			sum/=10;
			if(all>i){
				break;
			}
		}
		if(all==i){
			printf("%d\n",i);
		}
		
	}
	return 0;
} 