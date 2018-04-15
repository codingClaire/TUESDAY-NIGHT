/*C: 转置矩阵
描述

求一个矩阵的转置矩阵。

输入

输入整数m和n分别代表一个矩阵的行和列。再输入m*n个整数作为矩阵的元素。

输出

若m和n能构成矩阵，则输出原矩阵及其转置矩阵；否则输出NO。

注意：输入和输出数字两两之间由一个空格隔开

样例1

输入

输出

5 0
NO

样例2

输入

输出

2 2
1 2 3 4
1 2
3 4
1 3
2 4*/
 
#include<iostream>
using namespace std;

int main() 
{   
  int m,n;
  cin>>m>>n;
   
  int a[m][n];
   int i,j,swap;
  	for(i=0;i<m;i++)
  	 for(j=0;j<n;j++)
  	    cin>>a[i][j];
  	if(m==0||n==0)
  cout<<"NO"<<endl;
  else{
  	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
  	   {
  	 	 cout<<a[i][j]<<' ';
	   }
	   cout<<endl;	
    }//按照矩阵形式输出原矩阵 
    for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
  	   {
  	 	 cout<<a[j][i]<<' ';
	   }
	   cout<<endl;	
    }//按照矩阵形式输出转置矩阵 
  }
return 0;
}
