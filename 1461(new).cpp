#include<iostream>
using namespace std;
int main(void){
	string a="ABA";
	int num;
	scanf("%d",&num);
	if(num==1){
		printf("A");
	}else{
		for(int i=2;i<num;i++){
			string t=a;
		a+='A'+i;
			a=a+t;	
		}
	}
	cout<<a;
	return 0;
	
	
} 