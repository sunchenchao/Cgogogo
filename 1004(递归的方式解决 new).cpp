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
//ʵ����û������ 
//�������Ľ�����ǳ�ʱ�� 
//ʹ�õݹ�ȥ��� �������  
//��������ݹ����������ǰ����  
//Ȼ�����ǰһ�� ��������ǰ���� ���ǵ������ 