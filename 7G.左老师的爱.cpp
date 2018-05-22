/*G: 左老师的爱
左老师的爱

 

Description:

左老师有n个题目，他希望出一张考试试卷，从中选取一定数量的题目，在不改变给定题目顺序的情况下，要求选取的题目难度严格递增，为了防止有人AK，左老师希望在考试中出尽可能多的题目，求最大题目数量。

 

Input:

每个测试点只有一组测试数据。

第一行一个整数n表示题目数量，第二行n个整数ai表示题目难度。

测试点

n

ai

1

1<=n<=1e3

1<=ai<=1e9

2

3

4

5

1<=n<=1e5

 

Output:

输出一个整数ans，一场考试中题目数量的最大值

 

Sample Input:

5

1 2 3 1 5

 

Sample Output:

4

 

Hint:

可以选取第1、2、3、5题*/




#include <iostream>  
using namespace std;  

int lis(int *a, int len)  
{  
    int longsub[len];  
    for (int i=0; i<len; i++)  
        longsub[i] = 1;//全部初始化为1  
  
    for (int j=1;j<len;j++) 
	{  
        for (int i=0;i<j;i++) 
		{  
            if (a[j]>a[i] && longsub[j]<longsub[i]+1)
                longsub[j]=longsub[i]+1;
        }  
    }  
  
    int max = 0;  
    for (int j=0; j<len; j++) 
	{    
        if (longsub[j]>max) 
		   max=longsub[j];
    }  
    return max;  
}  
  
int main()  
{  
   	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
       cin>>a[i]; //难度输入
    int s= lis(a,n);  
    cout<<s<< endl;  
return 0;  
}  
