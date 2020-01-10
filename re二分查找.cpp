#include<stdio.h>
int erfen(int *a,int b,int num){
	int L=0;
	int R=b-1;
	while(L<=R){
		int mid=L+(R-L)/2;
		if(a[mid]==num){
			return a[mid];
		}
		if(a[mid]<num){
			L=mid+1;
		}
		if(a[mid]>num){
			R=mid-1;
		}			
	}
	return -1;
}
int main(){
	int a[6]={
		1,2,3,4,5,6
	};
	int good=erfen(a,6,7);
	printf("%d",good);
	
	
} 