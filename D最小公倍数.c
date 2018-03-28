/*D: 最小公倍数
描述
 
输入两个正整数m和n，输出m和n的最小公倍数。
 
输入
 
第1行是一个整数T，表示随后有T组数据。每组数据占一行，包含两个整数，用空格隔开。
 
输出
 
对每组数据输出两个整数的最小公倍数，并换行。
 
样例
 
输入
输出
3
2 3
3 9
4 10
6
9
20*/ 

#include<stdio.h>
int main()
{
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		int times;
		times=m*n;
		int i,swap;
		if(m>n){
			swap=m;m=n;n=swap;
		}
		for(i=1;i<=m;i++)
		{
			if(m%i==0&&n%i==0)
			times=times/i;
		}
		printf("%d\n",times);
	}
	  
return 0;
}
