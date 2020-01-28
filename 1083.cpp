#include<stdio.h>
int main(){
	int all[100];
	int i=0;
	while((scanf("%d",&all[i]))!=EOF){
		i++;
	}
	for(int a=0;a<i;a++){
		printf("%c",all[a]);
	}
	return 0;
}