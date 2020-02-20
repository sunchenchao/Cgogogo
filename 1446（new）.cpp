#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int xiao,da;
	xiao=a;
	if(xiao<b){
		xiao=b;
	}
	if(xiao<c){
		xiao=c;
	}
	da=a*b*c;
	for(int i=xiao;i<da;i++){
		if(i%a==0&&i%b==0&&i%c==0){
			printf("%d",i);
			break;
		}
	}
	
	return 0;
	
} 