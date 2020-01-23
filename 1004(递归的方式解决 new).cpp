#include<stdio.h>
int f(int k){
	if(k<=4){
		return k;
	}
	return f(k-1)+f(k-3);
}
int main(){
	while(true){
		int kk=0;
		scanf("%d",&kk);
		if(kk==0){
			break;
		}else{
			printf("%d\n",f(kk));
		}	
	}
	return 0;
} 
//实现是没有问题 
//但是最后的结果就是超时了 
//使用递归去解决 这个问题  
//跳出这个递归的条件就是前四天  
//然后就是前一天 加上三天前的羊 就是当天的羊 