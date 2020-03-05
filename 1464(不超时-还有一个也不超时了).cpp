#include<stdio.h>
#include<math.h>
int prime(int n)  //验证素数 
{
    int i, x, t;
    t =    (int)(sqrt(n));
    for(i = 2; i <= t; i++)
        if(n%i == 0) return 1;
    return 0;
}
void primetwo(int n)  //分解质因数 
{
    int i, a[100], k = 0, t, sum = 1;
    t = n;
    for(i = 2 ; i <= n ; i++)
    {
        if(n % i == 0)
        {
            a[k] = i;
            sum = sum * a[k];
            n = t / sum;           
            i = 1;    k++;                   
        }  
    }
    printf("%d=",t);
    for(i = 0 ; i < k ; i++)
    {
        printf("%d",a[i]);     
        if(i < k - 1) printf("*"); //最后一个没有 * 号 
    }  
    printf("\n");
}
int main()
{      
    int a, b, i;
    scanf("%d%d",&a,&b);
    for(i = a; i <= b; i++)
    {
        if(prime(i))  //不是素数 
        {      
            primetwo(i);
        }
        else
        {
            printf("%d=%d\n",i,i);         
        }
    }      
    return 0; 
}