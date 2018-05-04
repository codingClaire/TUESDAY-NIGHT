#include<iostream>
using namespace std;

int main()
{
	int n,m; 
	cin>>n>>m;
	int a[n][m];
	int i,j;
	a[0][0]=1;
	if(m==1&&n==1)
	{
		cout<<a[0][0]<<endl;
	}//只有一个元素 
	else if(n==1&&m>1)
	{
		for(i=0;i<m;i++)
		{
			a[0][i]=i+1;
			cout<<a[0][i]<<" ";
		}
		cout<<endl;
	}//只有一行 
	else if(m==1&&n>1)
	{
		for(i=0;i<n;i++)
		{
			a[i][0]=i+1;
			cout<<a[i][0]<<endl;
		}
	}//只有一列 
	else //都大于1行
	{
		a[0][1]=2;a[1][0]=3
		for(i=1;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i-1][1]==a[i][0]-1&&i<n-1)
				    a[i+1][0]=a[i][0]+1;
				if(a[i+1][0]==a[i][0]+1)
				    a[i][1]=a[i+1][0]+1;
				if(a)
				
				    
			}
		}
		 
		
		
		
		for(i=0;i<n;i++)
	    {
	     	for(j=0;j<m;j++)
	     	{
		       cout<<a[i][j]<<" ";
		    }
		    cout<<endl;
	    }//输出矩阵 

	 } 
   
	
return 0;	
 } 

