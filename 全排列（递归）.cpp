#include<stdio.h>
#include<string.h>
//������� ��һ���Ǹ��ַ���  �ڶ�����λ�� 
void f(char* aa,int k){
	int len=strlen(aa);
	//�ַ������ܳ���
	//ȫ����ģ�� Ҫȥ���� 
	if(k==len-1){
		printf("%s\n",aa);
		return;
	}//���ַ����ĳ���Ϊ���һ����ʱ���������ȥ 
	
	for(int i=k;i<len;i++){
		{
			char t=aa[k];
		aa[k]=aa[i];
		aa[i]=t;
		}
		//�ͺ�����Ǹ��ַ�ȥ����λ�� 
		
		f(aa,k+1);
		
		//�������һ�������� û������ 
		{
			char t=aa[k];
		aa[k]=aa[i];
		aa[i]=t;
		}
		
	}
}
int main(){
	char a[]="ABCDE";
	f(a,0);
	
} 