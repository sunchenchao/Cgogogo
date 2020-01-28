#include<stdio.h>
int main(){
	int num=0;
	scanf("%d",&num);
	int all[num];
	all[0]=0;
	int len=num;
	int weizhi=0;
	int flag=0;
	while(len!=1){
		if(all[weizhi]!=1){
			flag++;
			if(flag==3){
			
			all[weizhi]=1;
		//	printf("%d ",weizhi);
			flag=0;	
			len--;
		}
		
		}
		
		
		weizhi++;
		if(weizhi==num){
			weizhi=0;
		}
	//	printf("%d ",weizhi);
		
		
	}
	for(int i=0;i<num;i++){
		if(all[i]!=1){
			printf("%d\n",i+1);
			break; 
		}
	//printf("%d  ",all[i]);
	}
	return 0;
}
//使用公式
 /* If number = 3

     * f(1) = 0

     * f(2) = 1 = (f(1) + 3) % 2

     * f(3) = 1 = (f(2) + 3) % 3

     * f(4) = 0 = (f(3) + 3) % 4

     * f(5) = 3 = (f(4) + 3) % 5

     * ...

     * f(n) = x = (f(n-1) + 3) % n

     * */ 