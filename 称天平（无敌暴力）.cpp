#include<stdio.h> 
int main(){
	int a[5]={
		81,27,9,3,1
	};
	int sum[5];
	int kk;
	scanf("%d",&kk);
	
	for(int i=0;i<2;i++){	
		for(int i2=0;i2<3;i2++){	
			for(int i3=0;i3<3;i3++){	
				for(int i4=0;i4<3;i4++){
						for(int i5=0;i5<3;i5++){
						int flag=0;
							if(i==0){
								sum[0]=0;
								
							}
							if(i==1){
								sum[0]=81;
							}
							if(i2==0){
								sum[1]=0;
							}
							if(i2==1){
								sum[1]=27;
							}
							if(i2==2){
								sum[1]=-27;
							}
							
							if(i3==0){
								sum[2]=0;
							}
							if(i3==1){
								sum[2]=9;
							}
							if(i3==2){
								sum[2]=-9;
							}
							if(i4==0){
								sum[3]=0;
							}
							if(i4==1){
								sum[3]=3;
							}
							if(i4==2){
								sum[3]=-3;
							}
							
							if(i5==0){
								sum[4]=0;
							}
							if(i5==1){
								sum[4]=1;
							}
							if(i5==2){
								sum[4]=-1;
							}
							for(int ii=0;ii<5;ii++){
								flag=flag+sum[ii];
								
							}
							//printf("%d\n",flag);
							
					
					if(flag==kk){
							int kkk=0;
							for(int ii=0;ii<5;ii++){
								
							
									if(sum[ii]>0){
										
										if(kkk==0){
									printf("%d",sum[ii]);
									kkk=1;
								}else{
									
									printf("+%d",sum[ii]);
								}
										
									
									}
									if(sum[ii]<0){
										printf("%d",sum[ii]);
										kkk=1;
									}			
						
							}
							return 0;
									
								}
					
					
		}
					
					
					
		}
		
			
		}
			
		}
	}
}