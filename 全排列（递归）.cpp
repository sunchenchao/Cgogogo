#include<stdio.h>
#include<string.h>
void f(char* aa,int k){
	int len=strlen(aa);
	if(k==len-1){
		printf("%s\n",aa);
		return;
	}
	
	for(int i=k;i<len;i++){
		{
			char t=aa[k];
		aa[k]=aa[i];
		aa[i]=t;
		}
		
		f(aa,k+1);
		{
			char t=aa[k];
		aa[k]=aa[i];
		aa[i]=t;
		}
		
	}
}
int main(){
	char a[]="ABCDE";
	f(a,0);
	
} 