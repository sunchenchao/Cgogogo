#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793238
int main(){
	while(true){
		double H,W;
	scanf("%lf%lf",&H,&W);
	if(H==0&&W==0){
		break;
	}
	if(H<W){
		double temp=H;
		H=W;
		W=temp;
	}
	//�����Ŀ��Ϊ��  ��ô2r�п����Ǵ���W����ȵģ�   ��ô���İ뾶����ֻ��ʹ��W/2
	//������
	double area1,r1;
	r1=H/(2*PI+2);
	if(2*r1>W){
		r1=W/2.0;
		
	}
	area1=r1*PI*r1*W;
	
	
	//��H-2RΪ�� ��ô����2r�ǲ����ܴ���W��
	double area2,r2;
	r2=W/(PI*2.0);
	area2=r2*PI*r2*(H-2*r2);
	if(area1>=area2){
		printf("%.3lf\n",area1);
	}else{
		printf("%.3lf\n",area2);
	}
		
	}
	return 0;
	
	 
} 