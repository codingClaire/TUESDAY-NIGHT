/*B: MCM
LCS
Time Limit: 1000ms
Memory Limit: 128M

Description:
��֪��n������,��i�����������Ϊa[i], ����Ϊa[i+1]��
�����n���������������Ҫ��ִ�г˷��Ĵ�������Сֵ��

Input:
��һ����һ��������n����ʾ����ĸ�����
�ڶ�����n+1����������i��������ʾa[i]��

Output:
�����һ����һ����������n�������������Ҫִ�еĳ˷���������Сֵ��
Sample Input:
4
1 2 3 4 5

Sample Output:
38

Hint:
����80%������ n <= 100
����100%������ n <= 2000, a[i] <= 100
*/


#include<iostream> 
#include<cstdlib>
using namespace std;

int matrix(int* p, int n) 
{  
    int m[n][n],s[n][n];
    for (int i=1; i<=n; i++) 
	{  
        m[i][i]=0;  
    }  
    int l=0,i=0,j=0,tmp=0;  
    
    for (l=2; l<=n;l++) 
	{  
        for (i=1; i<=n-l+1;i++) 
		{  
            j=i+l-1;  
            m[i][j]=m[i][i]+m[i+1][j]+p[i-1]*p[i]*p[j];  
            s[i][j]=i;  
            for (int k=i+1; k<j;k++) 
			{ 
                tmp=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]; 
                if (tmp<m[i][j]) 
				{  
                    m[i][j]=tmp;  
                    s[i][j]=k;  
                }  
            }  
        }  
	}
	return tmp;  
}  
int main()
{
	int N;
	cin>>N;
	int p[N+1];
	for(int i=0;i<=N;i++)
	{
		cin>>p[i];
    }
	cout<<matrix(p,N)<<endl;
return 0;
}


/*#include<iostream>
//#include<vector>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int matrix[N+1];
	for(int i=0;i<=N;i++)
	{
		cin>>matrix[i];
	}
    int k=1,l=2,s=0;
    int m=matrix[0],f=matrix[1],n=matrix[2];
   
	for(int j=1;j<N;j++)
	{
		s=s+m*n*f;
		f=matrix[k+j];
		n=matrix[l+j];
		//cout<<s<<endl;
	}
	cout<<s<<endl;
return 0;	
}*/
