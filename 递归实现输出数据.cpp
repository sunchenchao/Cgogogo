#include<stdio.h>
void xun(int a,int b){
	for(int i=a;i<=b;i++){
		printf("%d\n",i);
	}	
}
void di(int a,int b){
	if(b>=a){
		di(a,b-1);
	}
	printf("%d",b);

}
int main(){
	di(1,8);
	
	
} 