#include<stdio.h>
int main(){
	int num=0,sum=0,flag=10;
	scanf("%d",&num);
	sum=num%8;
	num=num/8;
	while(true){
		if(num==0){
			break;
		}
		sum=sum+num%8*flag;
		num=num/8;
		flag=flag*10;	
	}
	printf("%d",sum);
	return 0;
} 
%//d ���� ��ʮ������ʽ��ӡһ������ֵ

//%o ����   �˽���

//%x ����   ʮ������
//ֱ�������  