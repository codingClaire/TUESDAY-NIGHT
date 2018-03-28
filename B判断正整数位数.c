/*B: 判断正整数有多少位
描述
 
输入一个正整数，判断有多少位。
 
输入
 
第1行是一个整数n，表示随后有n组数据。
每组数据占一行，包含一个正整数。
 
输出
 
对于每一组数据，
输出此正整数包含的位数。
 
样例
 
输入
输出
3
1
10
100
1
2
3*/ 

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		long int j=10;
		int count=0;
		do
		{
		  		a[i]=a[i]-(a[i]%j);
				j=j*10;
		  		count++;
		}while(a[i]!=0);
		printf("%d\n",count);	
	}
return 0;
}
