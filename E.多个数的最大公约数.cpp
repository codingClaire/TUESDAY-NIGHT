/*E: 多个数的最大公约数
描述
 
求多个正整数的最大公约数
 
输入
 
每个测试输入包含1个测试用例，格式为
   第1行，数据的组数n
   第2行，第一组数据(数据之间以逗号隔开），
   第3行，第二组数据，
   ...
   第n+1行，第n组数据
 
输出
 
输出每组数据中的最大公约数
 
样例
 
输入
输出
3
18,27,15,33
120,328,56,264
78,143,260,52
3
8
13*/


#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else b=b-a;
	}
   return a;
}//更相减损术 

int main()
{
	int n;
	cin>>n;
	int m;
	for(m=0;m<n;m++)
	{
		int a[4];
	int i;
	for(i=0;i<4;i++)
	 scanf("%d,",&a[i]);
    int cd=a[0];
	for(i=1;i<4;i++)
	   cd=gcd(cd,a[i]);
		cout<<cd<<endl;	
	}	 
 } 

/*只适用于EOF输入 
#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else b=b-a;
	}
   return a;
}//更相减损术 

int main()
{
    int i,len=0;
	int a[100];
	int n,m;
	cin>>n;
	for(m=0;m<n;m++)
	{
		while(scanf("%d,",&a[len])==1)
		{
			 len++;
		}
		
	 int cd=a[0];      
	    for(i=1;i<len;i++)
	    {
	    	cd=gcd(cd,a[i]);
		}
		cout<<cd<<endl; 
	    len=0;  	
    }
return 0;
 } 

*/ 






/*
很暴力了 
int main()
{
	int i=0,len=0;
	int a[100];
	int n,m;
	cin>>n;
	for(m=0;m<n;m++)
	{
		while(scanf("%d",&a[i])==1)
	        len++;	
	    int min=a[0];
	    for (i=0;i<len;i++)
    	   if(a[i]<min)
               min=a[i];//先找到所有数字中的最小值 
	    int j,flag;
	    for(i=min;i>=2;i--)
	    {
	       for(j=len-1;j>=0;j--)
	       {
	         if (a[j]%i!=0) 
		     {
		     	flag=0;
		     	break;//只要出现一个不能整除的数，就跳出并且flag为0 
		     }
		     else flag=1;
	        }
	       if (flag==1)//跳出for循环如果flag始终是1说明都可以被整除 找到公约数 
	       {          //如果此时flag是0就不是最大公约数 最小的数减1再次验证 
	        	cout<<i<<endl;
	            break;
	       }	
    	}
	} 
return 0;	
}*/ 
