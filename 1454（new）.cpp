#include<stdio.h>
int abss(int a){
	if(a<0){
		return -a;
	}else{
		return a;
	}
} 
int main(){
	int num,a,you=0,zuo=0,sum=1;
	scanf("%d",&num);
	scanf("%d",&a);
	for(int i=1;i<num;i++){
		int flag;
		scanf("%d",&flag);
		if(abss(a)<abss(flag)&&flag<0){
		you++;
		}
		if(abss(a)>abss(flag)&&flag>0){
		zuo++;
		}
		
	}
	if(you==0||zuo==0){
			printf("%d",sum);
		}else{
			sum=sum+you+zuo;
			printf("%d",sum);
		}
		return 0;
}