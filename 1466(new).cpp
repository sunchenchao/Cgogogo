#include<stdio.h>
#include<string.h>
int main(){
	char a[30]="";
	char b[30]="";
	scanf("%s%s",&a,&b);
	
	
	int alen=0,blen=0;
	alen=strlen(a);
	blen=strlen(b);
	if(alen!=blen){
		printf("1");
		return 0;
	}
	if(strcmp(a,b) == 0){
		printf("2");
		return 0;
	}
	if(stricmp(a,b) ==0){
		printf("3");
		return 0;
		
	}
	printf("4");
	return 0;
}



//int main(){
//    char a[11],b[11];
//    int la,lb,i;
 //   scanf("%s%s",a,b);
 //   la=strlen(a);
//    lb=strlen(b);
 //   if(la!=lb) printf("1\n");//串长不等
 //   else{
 //       if(!strcmp(a,b)) printf("2\n");//两串相等
 //       else{
  //          for(i=0;i<la;i++){
  //              a[i]=tolower(a[i]);
   //             b[i]=tolower(b[i]);
  //          }//串内字符转换成小写
   //         if(!strcmp(a,b)) printf("3\n");//小写串相等
 //           else printf("4\n");//两串不等
  //      }
 //   }
//    return 0;
//}