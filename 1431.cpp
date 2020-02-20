#include<stdio.h>
int f(int *a,int len){
	for(int i=0;i<len-1;i++){
		if(a[i]!=a[i+1]){
			return 0;
		}	
	}
	return 1;	
}
int main(){
	int num,all[100],sum=0;
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		scanf("%d",&all[i]);
	}
	while(f(all,num)==0){
		int ban=0;
		for(int i=0;i<num;i++){
			if(i==0){
				ban=all[i]/2;
				all[i]=ban;
			}else{
				all[i-1]=all[i-1]+all[i]/2;
				all[i]=all[i]/2;
			}
		}
		all[num-1]=all[num-1]+ban;
		for(int o=0;o<num;o++){
			if(all[o]%2!=0){
				sum++;
				all[o]++;
			}
		}	
	}
	printf("%d",sum);
	return 0;
} 