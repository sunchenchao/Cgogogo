#include<stdio.h>
int main(){
	int a,b,c,p;
//	scanf("%d %d %d %d",&a,&b,&c,&p);
//	for(int i=a+1;i<22000;i++){
//		if((i-b)%23==0&&(i-c)%28==0&&(i-p)%33==0){
//			printf("%d",i-a);
//	
//		}
//	}
//  最简单的思想就是使用暴力 
//优化的话就是使用剪织 
	int len=0;
	while(scanf("%d %d %d %d",&a,&b,&c,&p)&&p!=-1){
		len++;
		int i;
		for(i=p+1;(i-a)%23;i++);
			for(;(i-b)%28;i+=23);
				for(;(i-c)%33;i+=23*28);
				//上面是只是操作 妈的这个东西搞了半天 
					printf("Case %d: the next triple peak occurs in %d days.\n",len,i-p);
	return 0;
	}
}
 