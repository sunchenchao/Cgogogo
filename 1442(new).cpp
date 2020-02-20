#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int num;
	scanf("%d",&num);
	int x=5+(num)*4;
	int y=(num)*4+5;
	int all[y][x];
	memset(all,0,sizeof(all));

	for(int i=0;i<num;i++){
		//头顶部位 和脚下的部位 
		for(int ii=0;ii<x-4*(i+1);ii++){
			all[i*2][ii+2*(i+1)]=1;
			all[y-1-i*2][ii+2*(i+1)]=1;
		} 
		//单独一个两边
		{
			all[i*2+1][(i+1)*2]=1;
			all[i*2+2][(i+1)*2]=1;
			all[i*2+2][(i+1)*2-1]=1;
			
			all[i*2+1][x-1-(i+1)*2]=1;
			all[i*2+2][x-1-(i+1)*2]=1;
			all[i*2+2][x-(i+1)*2]=1;
			
			all[y-2-i*2][(i+1)*2]=1;
			all[y-3-i*2][(i+1)*2]=1;
			all[y-3-i*2][(i+1)*2-1]=1;
			
			
			all[y-2-i*2][x-1-(i+1)*2]=1;
			all[y-3-i*2][x-1-(i+1)*2]=1;
			all[y-3-i*2][x-(i+1)*2]=1;
			
		}
		//两边的一排
		for(int ii=0;ii<y-4*(i+1);ii++) {
			all[ii+2*(i+1)][i*2]=1;
			all[ii+2*(i+1)][x-1-i*2]=1;
		}
		 	
	} 
		//中间的
		{
			all[num*2][y/2]=1;
			all[num*2+1][y/2]=1;
			all[num*2+2][y/2]=1;
			all[num*2+3][y/2]=1;
			all[num*2+4][y/2]=1;
			
			all[num*2+2][y/2+1]=1;
			all[num*2+2][y/2+2]=1;
			all[num*2+2][y/2-1]=1;
			all[num*2+2][y/2-2]=1;
		
		} 	
		for(int i=0;i<y;i++){
			for(int ii=0;ii<x;ii++){
				if(all[i][ii]==1){
					printf("$");
				}else{
					printf(".");
				}
			}
			printf("\n");
		}	 
	return 0;
} 