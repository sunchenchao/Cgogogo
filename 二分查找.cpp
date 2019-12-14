#include<stdio.h>
int two(int a[],int size,int num){
	int head=0;
	int last=size-1;
	while(head<=last){
		int mid = head+(last-head)/2;
		if(a[mid]==num){
			return mid; 
		}else if(a[mid]>num){
			last=mid-1;
		}else if(a[mid]<num){
			head=mid+1;
		} 
		printf("%d %d\n" ,head,last);
	}
		return -1;
}
int main(){
	int k[7]={
		1,2,3,4,5,6,7
	};
	int right=two(k,7,7);
	printf("%d",right);
	
	
} 