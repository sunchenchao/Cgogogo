#include<stdio.h>
int main(){
	int num;
	while(scanf("%d",&num)!=EOF){
		int ok[2]; 
		int good=0; 
		for(int i=0;i<num;i++){
			scanf("%d %d",&ok[0],&ok[1]);
			if(ok[0]>=90&&ok[0]<=140&&ok[1]>=60&&ok[1]<=90){
				good++;
			}	
		}
		printf("%d\n",good);
		if(good==num){
			printf("Perfect\n");
		}
		if(good==0){
			printf("Terrible\n");	
		}
	}
	
	return 0;
}