#include<stdio.h>
int main(){
	int a,b;
	int flag = 0;
	scanf("%d%d",&a,&b);
	
	if(a<10){
		printf("   ");
	}else{
		printf("  ");
	}
	printf("%d\n",a);
	printf("¡Á");
	if(b<10){
		 flag =1;
		printf(" ");
	}
	printf("%d\n",b);
	printf("©¥©¥©¥\n");
	
	int sum = a*b;
	if(flag==1){
		if(sum<10){
			printf("   ");
		}else if(sum<100){
			printf("  ");
		}else{
			printf(" ");
		}
		printf("%d\n",sum);
		return 0;
	}else{
		int one = a*(b/10);
		int two = a*(b%10);
		if(b%10==0){
			printf("  00\n");
		}else{
			if(two<10){
			printf("   ");
		}else if(two<100){
			printf("  ");
		}else{
			printf(" ");
		}
		printf("%d\n",two);
		}
	
		
		
			if(one<10){
			printf("  ");
		}else if(one<100){
			printf(" ");
		}
		printf("%d\n",one);
	
	}
		printf("©¥©¥©¥\n");

		printf("%4d",sum);
		return 0;

	
	
	
	
	
	
	
	
} 