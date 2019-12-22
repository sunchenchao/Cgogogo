 #include<stdio.h>
 
 int main(){
 	int n;
	 double a,b,c;
 	scanf("%d",&n);
 	for(int i=0;i<n;i++){
	 	scanf("%lf %lf %lf",&a,&b,&c);
	 	double zhong;
	 	if(a<b){
	 		zhong=a;
	 		a=b;
	 		b=zhong;
	 	}
	 	if(a<c){
	 		zhong=a;
	 		a=c;
	 		c=zhong;
	 	}
	 	if(b<c){
	 		zhong = b;
	 		b=c;
	 		c=zhong;
	 	}
	 	if((b+c)>a){
	 		printf("YES\n");
	 	}else{
	 		printf("NO\n");
	 	}
	 	
	 	
	 }
 	
 	
 	
	return 0;
 }