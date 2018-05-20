/*A: LCS
LCS 
Time Limit: 1000ms 
Memory Limit: 128M 

Description: 
����������Ϊn��ȫ���У���������������г��ȡ� 

Input: 
��һ����һ��������N����ʾȫ���г��ȡ� 
�ڶ�����n����������֤��һ��n��ȫ���С� 
��������n����������֤��һ��n��ȫ���С� 

Output: 
�����һ����һ����������ʾ����������������г��ȡ� 

Sample Input: 
5 
1 3 2 4 5 
5 2 3 1 4 

Sample Output: 
2 

Hint: 
����80%������ n <= 1000 
����100%������ n <= 1000000*/

#include<iostream>
#include<cstring> 
#include<algorithm>
using namespace std;
int main()
{
	long n,i,j;
	cin>>n;
	int a[n],b[n],dp[n+1][n+1];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<=n;i++)
	{
		dp[i][0]=0;
		dp[0][i]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i-1]==b[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	/*for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
    }*/
    cout<<dp[n][n]<<endl;
return 0;	 
}
