#include<stdio.h>
int f(int num){
	if(num==1)
	return 1;
	return (f(num-1)+1)*2;
}
int main(){
	int a,b;
	scanf("%d",&a);
    int kk=f(a);
    printf("%d",kk);
    return 0;
}