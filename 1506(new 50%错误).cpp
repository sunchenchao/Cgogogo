#include<stdio.h>
#include<string.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		int b;
		scanf("%d",&b);
		int one=-1;
		char all[101][2][11];
		for(int i2=0;i2<b;i2++){
			scanf("%s  %s",&all[i2][0],&all[i2][1]);
		}
		for(int i2=0;i2<b;i2++){
			int flag=0;
			for(int i3=0;i3<b;i3++){
				if(strcmp(all[i2][0],all[i3][1])==0){
					flag = 1;
					break;
				}
			}
			if(flag==0){
			
					for(int i3=0;i3<b;i3++){
						if(strcmp(all[i2][1],all[i3][0])==0){
							one =i2;
								}
					
				}
			
					
			
				
				if(one != -1){
					
					break;
				}
				
					
			}
			
		}
		printf("%s %s ",all[one][0],all[one][1]);
		for(int i2=0;i2<b;i2++){
			for(int i3=0;i3<b;i3++){
				if(strcmp(all[one][1],all[i3][0])==0){
					printf("%s ",all[i2][1]);
					one = i2;	
				}
			}
		}
		printf("\n");
	}
	return 0;
} 