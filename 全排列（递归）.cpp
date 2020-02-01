#include<stdio.h>
#include<string.h>
//这个方法 第一个那个字符串  第二个是位置 
void f(char* aa,int k){
	int len=strlen(aa);
	//字符串的总长度
	//全排类模板 要去背的 
	if(k==len-1){
		printf("%s\n",aa);
		return;
	}//当字符串的长度为最后一个的时候就是跳出去 
	
	for(int i=k;i<len;i++){
		{
			char t=aa[k];
		aa[k]=aa[i];
		aa[i]=t;
		}
		//和后面的那个字符去交换位置 
		
		f(aa,k+1);
		
		//这个就是一个回溯了 没有问题 
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