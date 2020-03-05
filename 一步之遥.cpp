#include<stdio.h>
int main(){
	int a=1;
	while(true){
		int sum=97*a;
		int kk;
		kk=sum/127;
		sum=sum%127;
		if(sum==1){
			printf("%d  %d",a,kk);
			break;
		}
		a++;
		
	}
	
	
} 