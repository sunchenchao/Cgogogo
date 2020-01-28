#include<stdio.h>
int main(){
	int a[]={
		1,6,32,4,5,8,75,8,9,10
	};
	int max=0;
	int zong=0;
	for(int i=0;i<9;i++){
		max=i;
		for(int i2=i+1;i2<10;i2++){
			if(a[max]>a[i2]){
				zong=a[max];
				a[max]=a[i2];
				a[i2]=zong;
				  
			}
		}
		
	}
	for(int i=0;i<10;i++)
	printf("%d\n",a[i]);
	
} 