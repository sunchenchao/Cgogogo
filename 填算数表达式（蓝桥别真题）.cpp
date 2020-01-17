#include<stdio.h>
int main(){
	int a[9]={1,2,3,4,5,6,7,8,9};
	//暴力就是八层循环然后操作
	//0是加号 1是减号  2就是没有这种情况 
	int summm=0;
	for(int i=0;i<3;i++) {
		
		for(int i1=0;i1<3;i1++){
			for(int i2=0;i2<3;i2++){
				
				for(int i3=0;i3<3;i3++){
					for(int i4=0;i4<3;i4++){
						for(int i5=0;i5<3;i5++){
					
							for(int i6=0;i6<3;i6++){
								for(int i7=0;i7<3;i7++){
									summm++;
				
										char fu[9]="";
										if(i==0){
											fu[0]='+';	
										}
										if(i==1){
											fu[0]='-';
										}
										if(i==2){
											fu[0]='0';
										}
										///////////////////////////
										if(i1==0){
											fu[1]='+';
										}
										if(i1==1){
											fu[1]='-';
										}
										if(i1==2){
											fu[1]='0';
										}
										//////////////
										if(i2==0){
											fu[2]='+';		
										}
										if(i2==1){
											fu[2]='-';
										}
										if(i2==2){
											fu[2]='0';
										}
										//////////////
										if(i3==0){
											fu[3]='+';		
										}
										if(i3==1){
											fu[3]='-';
										}
										if(i3==2){
											fu[3]='0';
										}
										//////////////
										if(i4==0){
											fu[4]='+';		
										}
										if(i4==1){
											fu[4]='-';
										}
										if(i4==2){
											fu[4]='0';
										}
										//////////////
										if(i5==0){
											fu[5]='+';		
										}
										if(i5==1){
											fu[5]='-';
										}
										if(i5==2){
											fu[5]='0';
										}
										//////////////
										if(i6==0){
											fu[6]='+';		
										}
										if(i6==1){
											fu[6]='-';
										}
										if(i6==2){
											fu[6]='0';
										}
										//////////////
										if(i7==0){
											fu[7]='+';		
										}
										if(i7==1){
											fu[7]='-';
										}
										if(i7==2){
											fu[7]='0';
										}
										//对组成的字符串表达式进行数据的判断和处理
										int sum=0;
										int kk[9];
										int flag=1;
										kk[8]=a[8];
										  for(int len=7;len>=0;len--){
										  	if(fu[len]!='0'){
	  											kk[len]=a[len];
	  											flag=1;
	  										}else{
	  											kk[len]=a[len];
	  											for(int tt=0;tt<flag;tt++){
											  		kk[len]=kk[len]*10;
											  	}
											  	flag++;	
										  	}	
  											}
  											sum=kk[0];
  											int fuflag=1;
  											for(int len=0;len<8;len++){
											  	if(fu[len]=='+'){
											  		sum=sum+kk[len+1];
											  		fuflag=1;
	  											}
	  											if(fu[len]=='-'){
											  		sum=sum-kk[len+1];
											  		fuflag=-1;
	  											}
	  											if(fu[len]=='0'){
	  												sum=sum+kk[len+1]*fuflag;
											  		
											  	}
											  }
											 
											  if(sum==110){
												fuflag=1;
											  	sum=kk[0];
											  	for(int len=0;len<8;len++){
											  	if(fu[len]=='+'){
											  		sum=sum+kk[len+1];
											  		fuflag=1;
	  											}
	  											if(fu[len]=='-'){
											  		sum=sum-kk[len+1];
											  		fuflag=-1;
	  											}
	  											if(fu[len]=='0'){
	  												sum=sum+kk[len+1]*fuflag;
											  		
											  	}
											  	printf("%d  ",sum);
											  }
											  printf("\n");
											  printf("all:%d %s\n",sum,fu);
											  for(int ii=0;ii<8;ii++){
											  	printf("%d ",kk[ii]);
  												
  											}
  											printf("\n");
  										
  											
											  
  										}
										
			
								}
							}
						}
					}
				}
			}
		}
	}
}


