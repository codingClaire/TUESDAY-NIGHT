/*C: ת�þ���
����

��һ�������ת�þ���

����

��������m��n�ֱ����һ��������к��С�������m*n��������Ϊ�����Ԫ�ء�

���

��m��n�ܹ��ɾ��������ԭ������ת�þ��󣻷������NO��

ע�⣺����������������֮����һ���ո����

����1

����

���

5 0
NO

����2

����

���

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
    }//���վ�����ʽ���ԭ���� 
    for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
  	   {
  	 	 cout<<a[j][i]<<' ';
	   }
	   cout<<endl;	
    }//���վ�����ʽ���ת�þ��� 
  }
return 0;
}
