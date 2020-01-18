//对整个题目思路进行梳理
//采用递归 其实也是可以使用暴力来写的
//具体看外面的那个C的暴力 如果使用C来写的话对字符串的拼接就是//会出现问题
//使用java就是对字符串比较友好 比较简单
//整个题目使用 的是递归
//f这个函数有四个参数 第一个就是一串数据  第二个是当前处理到第//几个数据 第三个就是整个字符串 第四个参数 就是用来判断数据是//否到达要求
//对前面 的两种情况 一个是加号一个是减号进行处理都是还简单的
//然后就是对第三种情况来进行处理是连接的情况下就是将两个数连//接起来 然后再操作
//然后将两个数的和来给到下面的那个数 这样就可以实现后面的加减
//为什么要记录旧的那个数据 就是为回溯
//递归最重要的就是递归 和 回溯
//重点回溯
public class diguiTianFuHao{
	public static void f(int[] a,int b,String so,int num){
		if(b==0){
			if(a[0]==num)
			System.out.println(a[0]+so);
			return;
			}
		f(a,b-1,"+"+a[b]+so,num-a[b]);
		f(a,b-1,"-"+a[b]+so,num+a[b]);
		int old =a[b-1];
		a[b-1]=Integer.parseInt(""+a[b-1]+a[b]);
		f(a,b-1,so,num);
		a[b-1]=old;
	  
	}	 
	public static void main(String[] args){
		int[] a={1,2,3,4,5,6,7,8,9};
		f(a,8,"",110);

	}		
}