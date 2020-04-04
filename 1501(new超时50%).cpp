#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int c[100001]={
		0
	};
	int t[3];
	for(int i = 0;i<m;i++){
		scanf("%d%d%d",&t[0],&t[1],&t[2]);
		if(t[0]>t[1]){
			int temp = t[1];
			t[1]=t[0];
			t[0]=temp;
		}
		for(int i2=t[0]-1;i2<t[1];i2++){
			c[i2]=c[i2]+t[2];
		}	
	}
	for(int i=0;i<n;i++){
		printf("%d ",c[i]);
	}

} 
///