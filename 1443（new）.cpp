#include<stdio.h>
int main(){
  long long int a,b,c;
	scanf("%ld%ld%ld",&a,&b,&c);
	//使用通向公式来解决
 long long int sum=1,sn=1,f=1,a1=1;
	for(int i=0;i<c-1;i++){
		sn=(sn+a*a1+a*(a-1)/2)%b;
		sum=sum+sn;	
		a1=a1+a;
	} 
	printf("%ld",sum);
	return 0;
	//写题前判断循环次数 会不会出现超时
	//任何题目最好还是使用公式来解题
	
	
	//等差公式
	
	//An=a1+(n-d)*d
	
	/Sn=a1*d+n(n-1)/2 
	 
	
} 