#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		int flag=0;
		for(int i2=2;i2<=i/2;i2++){ 
			if(i%i2==0){
			flag=1;	
			break;
			}	
		}
		if(flag==0){
			printf("%d\n",i);
		}
		
	}
	return 0;
}