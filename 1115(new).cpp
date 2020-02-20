#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		int b,c;
		scanf("%d%d",&b,&c);
		int mid =b/2;
		for(int ii=0;ii<mid;ii++){
			for(int i1=0;i1<ii;i1++){
				printf(" ");
			}
			printf("X");
			for(int i1=0;i1<b-2*(ii+1);i1++){
				printf(" ");
			}
			printf("X\n");
		}
		//
		for(int ii=0;ii<mid;ii++){
			printf(" ");
		}
		//
		printf("X\n");
			for(int ii=mid-1;ii>=0;ii--){
			for(int i1=0;i1<ii;i1++){
				printf(" ");
			}
			printf("X");
			for(int i1=0;i1<b-2*(ii+1);i1++){
				printf(" ");
			}
			printf("X\n");
		}
		//
		for(int iii=0;iii<c-1;iii++){
			for(int ii=1;ii<mid;ii++){
			for(int i1=0;i1<ii;i1++){
				printf(" ");
			}
			printf("X");
			for(int i1=0;i1<b-2*(ii+1);i1++){
				printf(" ");
			}
			printf("X\n");
		}
		for(int ii=0;ii<mid;ii++){
			printf(" ");
		}
		printf("X\n");
			for(int ii=mid-1;ii>=0;ii--){
			for(int i1=0;i1<ii;i1++){
				printf(" ");
			}
			printf("X");
			for(int i1=0;i1<b-2*(ii+1);i1++){
				printf(" ");
			}
			printf("X\n");
		}
			
		}
		printf("\n");
		
	}
	return 0;
	
	
}