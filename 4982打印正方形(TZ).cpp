#include<stdio.h>
int main(){
	int num;
	while(scanf("%d",&num)!=EOF){
		int len=num/2+1;
		for(int i=0;i<len;i++){
		  for(int i2=0;i2<num;i2++){
  			if(((i==len-1)||i==0)&&(i2==0||i2==(num-1))){
			  	printf("+");
			  }else if(i2==0||i2==(num-1)){
			  	printf("|");
  			}else if((i==len-1)||i==0){
			  	printf("-");
			  }else{
  				printf(" ");
  			}
  		} 
  		printf("\n");
		
		
	}
} 
return 0;
}