#include<stdio.h>
int f(int a){
	int sum=1;
	while(true){
		if(a==1){
			return sum;	
			break;
		}
		if(a%2==0){
			a=a/2;
		}else{
			a=a*3+1;
			
		}
		sum++;
		
	}
}
int main(){
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF){
		//注意细节 就是这两给输入数字的大小 
		int flag=0;
		if(a>b){
			c=a;
			a=b;
			b=c;
			flag=1;
			
		}
	//	printf("%d %d",a,b);
		int best=0;
		int r=0;
		for(int i=a;i<b;i++){
			
			r=f(i);
			if(r>best){
				best=r;
			}	
		}
		//前面对数据进行了交换 所以在输出的时候也要交换回来 就是这么一个道理
		//细节  记住一定要细节 细节成就一切 弄了半天终于弄明白是怎么一回事了 
		if(flag==1){
		printf("%d %d %d\n",b,a,best);	
		}else{
		printf("%d %d %d\n",a,b,best);	
		}
		
	}
	
	return 0;
	
}