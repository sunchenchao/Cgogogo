#include<stdio.h>
int main(){
  long long int a,b,c;
	scanf("%ld%ld%ld",&a,&b,&c);
	//ʹ��ͨ��ʽ�����
 long long int sum=1,sn=1,f=1,a1=1;
	for(int i=0;i<c-1;i++){
		sn=(sn+a*a1+a*(a-1)/2)%b;
		sum=sum+sn;	
		a1=a1+a;
	} 
	printf("%ld",sum);
	return 0;
	//д��ǰ�ж�ѭ������ �᲻����ֳ�ʱ
	//�κ���Ŀ��û���ʹ�ù�ʽ������
	
	
	//�Ȳʽ
	
	//An=a1+(n-d)*d
	
	/Sn=a1*d+n(n-1)/2 
	 
	
} 