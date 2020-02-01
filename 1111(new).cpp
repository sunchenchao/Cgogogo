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
	//以它的宽度为高  那么2r有可能是大于W（宽度的）   那么它的半径就是只能使用W/2
	//来计算
	double area1,r1;
	r1=H/(2*PI+2);
	if(2*r1>W){
		r1=W/2.0;
		
	}
	area1=r1*PI*r1*W;
	
	
	//以H-2R为高 那么它的2r是不可能大于W的
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