#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[10005];
int main()
{
         int n,i=0,len=0;
         int num1=0,num2=0;
         scanf("%d",&n);
         while(scanf("%d",&a[i])!=EOF){    //һֱ���뵽�ı�������ctrl+Z;
             i++;
             len++;
         }
         sort(a,a+len);
         int t=a[0];
         for(int j=1;j<len-1;j++){
             if(a[j]==a[j+1]-2){    //�ҶϺ� 
                 num1=a[j]+1;
             }
             if(a[j]==a[j+1]){    //���غ� 
                 num2=a[j];
             }
         }
         printf("%d %d",num1,num2);
         return 0;
}