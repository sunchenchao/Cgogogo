#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int first=0;
	int sum=1;
	for(int i=0;i<n;i++){
		sum=sum+first;
		first++;
		int alll=sum;
		printf("%d ",alll);
		for(int ii=i+1;ii<n;ii++){
			alll=alll+1+ii;
			printf("%d ",alll);
		}
		printf("\n");
	}
	return 0;
	
} 