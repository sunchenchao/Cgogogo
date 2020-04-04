#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b){
	return *(int *)b - *(int *)a;
}
int main(){
	int num=0,a[1000],b[1000],c[1000],d[1000],e[1000],aa=0,bb=0,cc=0,dd=0,ee=0;
	scanf("%d",&num);
//	printf("%d\n",num);
	int all[num];
	for(int i=0;i<num;i++){
		scanf("%d",&all[i]);
		if(all[i]>=90){
			a[aa]=all[i];
			aa++;
		}else if(all[i]>=80){
			b[bb]=all[i];
			bb++;
			
		}else if(all[i]>=70){
			c[cc]=all[i];
			cc++;
			
		}else if(all[i]>=60){
			d[dd]=all[i];
			dd++;	
		}else{
			e[ee]=all[i];
			ee++;	
		}
	}
	printf("%d %d %d %d %d\n",aa,bb,cc,dd,ee);
	if(aa>=bb&&aa>=cc&&aa>=dd&&aa>=ee){
		printf("%d\n",aa);
		qsort(a,aa,sizeof(int),comp);
		for(int i =0;i<aa;i++){
			printf("%d ",a[i]);
		}				
	}else if(bb>=aa&&bb>=cc&&bb>=dd&&bb>=ee){
		printf("%d\n",bb);
		qsort(b,bb,sizeof(int),comp);
		for(int i =0;i<bb;i++){
			printf("%d ",b[i]);
		}				
	}else if(cc>=aa&&cc>=bb&&cc>=dd&&cc>=ee){
		printf("%d\n",cc);
		qsort(c,cc,sizeof(int),comp);
		for(int i =0;i<cc;i++){
			printf("%d ",c[i]);
		}				
	}else if(dd>=aa&&dd>=bb&&dd>=cc&&dd>=ee){
		printf("%d\n",dd);
		qsort(d,dd,sizeof(int),comp);
		for(int i =0;i<dd;i++){
			printf("%d ",d[i]);
		}				
	}else if(ee>=aa&&ee>=bb&&ee>=dd&&ee>=cc){
		printf("%d\n",ee);
		qsort(e,ee,sizeof(int),comp);
		for(int i =0;i<ee;i++){
			printf("%d ",e[i]);
		}				
	}
	return 0;
	
	
} 