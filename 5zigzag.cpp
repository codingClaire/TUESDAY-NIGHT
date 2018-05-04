/*G: Zig-Zag模式填充矩阵
描述

在一个m*n的数组中，按照Zig-Zag的顺序依次填写1,2,3,...m*n。


输入

两个整数m,n表示m*n的矩阵，整数间以空格隔开。2<=m,n<100

输出

输出矩阵

样例1
输入
输出
3 3
1 2 6
3 5 7
4 8 9
样例2
输入
输出
2 3
1 2 5
3 4 6*/

#include <iostream> 
using namespace std;  
  
  
int main()  
{  
    int i=0,j=0,s=0,m,n,k=0; //s为斜线数目  
    int a[100][100]={0};  
    cin>>m>>n;  
    for(s=0;s<m+n-1;s++)      
    {  
            /*奇数行*/  
            if((i+j)%2==1)    
            {  
                while(i<m&&j>=0)  
                    a[i++][j--]=k++;  
                if(i==m)
				{    //向右移动  
                    j+=2;
					i=m-1; 
				} 
                else if(j<0)  
                    j=0;    //向下移动  
            }  
            /*偶数行*/  
            else              
            {  
                while(j<n&&i>=0)  
                    a[i--][j++]=k++;  
                if(j==n)  
                {
                	i+=2;j=n-1;  //向下移动
				}
                else if(i<0)  
                    i=0;         //向右  
            }  
    }  
    /*输出*/  
    for(i=0;i<m;i++)       
    {  
        for(j=0;j<n;j++)  
        cout<<a[i][j]+1<<' ';  
        cout<<endl;  
    }  
    return 0;  
}  
