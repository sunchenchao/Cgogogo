#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	scanf("%f",&a);
	b=a/2;
	while(1){
		c=(b+a/b)/2;
		if(fabs(c-b)<0.00001){
			break;
			b=c;
		}
	
	}
	printf("%.3f\n",c);
	return 0;	
} 

//���� ���Լ� ������ʱ�� ��֪��Ϊʲô 
//����������C�ķ���
//�������� 

//int main()
 
//{
 // long double x,x1,x2;
 
 // scanf("%Lf",&x);
//  x1=x/2;
 // x2=(x1+x/x1)/2;
 
 // while(fabs(x1-x2)>0.00001)
 // {
 //    x1=x2;
  //  x2=(x1+x/x1)/2;
 // 
// }
 
//  printf("%.3Lf",x2);
 
  // return 0;
 // 
//} 