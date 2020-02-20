#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int sum=0,rr=1,add=1;
	c=c+1;
	
	while(c--){
		for(int i=0;i<a;i++){
			sum=(sum+add)%b;
			if(i==0){
				rr=sum+rr;
			}
			add++;	
		}	
	}
	printf("%d",rr);
	return 0;
} 