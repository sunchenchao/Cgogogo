#include<stdio.h>
//完美立方 给一个n找出n一下的所有的 n3=a3+b3+c3 
int main(){
	int n,a,b,c,d;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		for(int i1=2;i1<n;i1++){
			for(int i2=i1;i2<n;i2++){
				for(int i3=i2;i3<n;i3++){
					if(i*i*i==i1*i1*i1+i2*i2*i2+i3*i3*i3){
						printf("%d %d %d\n",i1,i2,i3);
					}
				}
			}
		}
	}
	return 0;
	
	
} 