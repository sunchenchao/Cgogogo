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
		//ע��ϸ�� �����������������ֵĴ�С 
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
		//ǰ������ݽ����˽��� �����������ʱ��ҲҪ�������� ������ôһ������
		//ϸ��  ��סһ��Ҫϸ�� ϸ�ڳɾ�һ�� Ū�˰�������Ū��������ôһ������ 
		if(flag==1){
		printf("%d %d %d\n",b,a,best);	
		}else{
		printf("%d %d %d\n",a,b,best);	
		}
		
	}
	
	return 0;
	
}