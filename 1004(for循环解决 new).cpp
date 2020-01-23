#include<stdio.h>
int main(){
	int all[55]={
		1,2,3,4
	};
	for(int i=4;i<55;i++){
		all[i]=all[i-1]+all[i-3];
	}
	while(true){
		int num;
		scanf("%d",&num);
		if(num==0){
			break;
		}
		printf("%d\n",all[num-1]);
	}
	return 0;
} 
//使用for循环来实现这个 母牛问题 