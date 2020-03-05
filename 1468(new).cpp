#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[10];
	char aa[4]="",bb[4]="";
	int a=0,b=0;
	gets(str);
	int lenstr=strlen(str);
	for(int i=0;i<lenstr;i++){
		if(str[i]==' '){
			strncpy(aa,str,i+1);
			a=atoi(aa);
			strncpy(bb,str+i+1,lenstr);	
			b=atoi(bb);
			//printf("%d    %d\n",a,b);
			break;
		}
		if(i==lenstr-1){
			a=atoi(str);
			b=0;
		}
	}
	char all[21][15]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
	char sanshi[15]="thirty";
	char sishi[15]="forty";
	char wushi[15]="fifty";
	if(a<=20){
		printf("%s",all[a]);
	}else{
		printf("%s %s",all[20],all[a%20]);
	}
	if(b==0){
		printf(" o'clock");
		return 0;
	}
	if(b<=20){
		printf(" %s",all[b]);
	}else{
		if(b<30){
			printf(" twenty %s",all[b%20]);
			return 0;
			
		}
		if(b==30){
			printf(" thirty");
			return 0;
		}
		if(b<40){
			printf(" thirty %s",all[b%30]);
			return 0;
		}
		if(b==40){
			printf(" forty");
			return 0;
		}
		if(b<50){
			printf(" forty %s",all[b%40]);
			return 0;
		}
		if(b==50){
			printf(" fifty");
			return 0;
		}
		if(b<60){
			printf(" fifty %s",all[b%50]);
			return 0;
		}
		
	}
	
	
	return 0;
	
} 