#include<stdio.h>
#include<string.h>
char left[3][7];
char right[3][7];
char end[3][7];
int panduan(char a,int flagg){
	if(flagg==1){//��Ӳ�����ص� 
	for(int i=0;i<3;i++){
		switch(end[i][0]){
			case 'u':if(strchr(left[i],a)==NULL){//�鷳ע��һ�����ϸ�� 
			//���Ҫʲôʱ�򷵻�false  ��Ҫ��������治���ڵ�ʱ�� 
			//���ǲ�����Ϊture��ʱ��ִ�� 
				return 0;
			};
			break;
			case 'e':if((strchr(left[i],a))||(strchr(right[i],a))){
				//����ĸ������� ������ʱ�����������
				//ϸ�� ϸ�� ���С����Ū����ô��ʱ�� 
				return 0;
			};
			break;
			case 'd':if(strchr(right[i],a)==NULL){
				return 0;
			};
			break;
		}
	}
	}else if(flagg==0){//�������ٱ������ 
		for(int ii=0;ii<3;ii++){
		switch(end[ii][0]){
			case 'u':if(strchr(right[ii],a)==NULL){
				return 0;
			}
			break;
			case 'e':if((strchr(left[ii],a))||(strchr(right[ii],a))){
				return 0;
			}
			break;
			case 'd':if(strchr(left[ii],a)==NULL){
				return 0;
			}
		}
		
	}
	
	    
		
	}

return 1;
}
int main(){
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		scanf("%s %s %s",left[0],right[0],end[0]);
		scanf("%s %s %s",left[1],right[1],end[1]);
		scanf("%s %s %s",left[2],right[2],end[2]);
		for(char a='A';a<='L';a++){
			if(panduan(a,1)==1){
				printf("%c is the counterfeit coin and it is heavy.\n",a);
				break;
			}else if(panduan(a,0)==1){
				printf("%c is the counterfeit coin and it is light.\n",a);
				break;
			}
			
			
		}
	}
	return 0;
	
} 