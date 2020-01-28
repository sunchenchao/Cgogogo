#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char a[1001];
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		gets(a);
		puts(a);
		printf("\n\n");
	}
	while(scanf("%s",&a)!=EOF){
		printf("%s\n",a);
		printf("\n");  
	}
	return 0;
} 