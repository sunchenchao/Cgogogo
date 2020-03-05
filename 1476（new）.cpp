#include<stdio.h>
int main(){
	int v1,v2,t,s,l;
	scanf("%d%d%d%d%d",&v1,&v2,&t,&s,&l);
	int time = 0;
	int sumv1=0,sumv2=0,flag=0;
	while(true){
		//进入一次后出来 然后就是兔子和乌龟都要走一遍的 
		if(sumv1-sumv2>=t&&flag==0){
			flag = 1;
			for(int i=0;i<s;i++){
				sumv2=sumv2+v2;
				time++;
				if(sumv2==l){
					break;
				}
			}
			if(sumv2==l){
				printf("T\n");
				break;
			}
		}else{
			flag =0;
		sumv1=sumv1+v1;
		sumv2=sumv2+v2;	
		time++;
		if(sumv1==l&&sumv2==l){
			printf("D\n");
			break;
		}
		if(sumv1>=l){
			printf("R\n");
			break;
		}
		if(sumv2>=l){
			printf("T\n");
			break;
		}
		}	
		//printf("%d %d %d\n",sumv1,sumv2,time);
		
	}
	printf("%d",time);
} 