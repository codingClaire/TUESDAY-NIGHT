/*A: n个不同整数的所有组合
描述
 
计算n个不同整数的所有的组合
  
输入
 
第1行是一个整数m，表示随后有m组数据。
每组数据占一行，第一个整数n表示随后有n个不同的整数。
 
输出
 
对每组数据，输出这n个不同整数的不同组合，含空组合。每个组合输出前输出“--> ”。
要求必须按照上课讲的递归方法来写，先输出包含该元素的情况，再输出不包含的情况，这样才能保证输出顺序和标准答案一致。
 
样例
 
输入
输出
2
2 1 2
3 1 2 3

--> 1 2
--> 1
--> 2
--> 
--> 1 2 3
--> 1 2
--> 1 3
--> 1 
--> 2 3
--> 2
--> 3
--> */

#include<iostream>
#include<cmath>

using namespace std;

int combination(int k,int n) 
{
	int j;
    for(j=0;j<pow(2,n+1);j++)//j从0到2的n+1次方
	{
		if(j%(int)pow(2,k)<=(pow(2,k))/2) 
		  return 1;
        else return 0; 
	}
}


int main()
{
	int m,i;
	cin>>m;
	for(i=0;i<m;i++)
	{
		int n,j;
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}//输入数组 
		int l,k; 
		for(l=0;l<pow(2,n);l++)
		{
			cout<<"--> ";
			for(k=0;k<n;k++)
		    {
               if(combination((k+1),n)==1)//判断a[k]是否要输出 
               {
          	     cout<<a[k]<<" ";
		       }	  
		    }
		    cout<<endl;
		} 
	}
return 0;
}


