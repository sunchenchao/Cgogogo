#include<stdio.h>
int CompactIntegers(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			
		}else{
			printf("%d ",a[i]);
			sum++;;
		}
	}
	printf("\n");
	return sum;
}
int main(){
	int a;
	scanf("%d",&a);
	int all[a];
	for(int i=0;i<a;i++){
		scanf("%d",&all[i]);
	}
	int k=CompactIntegers(all,a);
	printf("%d",k);
	return 0;
	

	
	
	
} 