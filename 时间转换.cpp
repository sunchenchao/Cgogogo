#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int s=0;
	s=a%60;
	a=a/60;
	int m=0;
	m=a%60;
	a=a/60;
	printf("%d:%d:%d",a,m,s);
	 return 0;
	
	
	
	
}