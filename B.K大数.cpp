/*B: K����
����
 
����һ������A[N]��N<=100���У���K(1>=K && K <=N)С������
 
����
 
��1����һ������N����ʾ����A�Ĵ�С��Ȼ�����һ������K��1>=K && K <=N����������N����������ʾ����A��ÿһ��Ԫ�ء�ע�⣺����Ԫ��������ģ�����������Ԫ�ز���ȣ�����
 
���
 
�������A�е�KС��Ԫ��
 
����
 
����
���
6 3
1 2 5 8 3 999
3
*/ 
 


#include<iostream>
using namespace std;

void bubble_sort(int a[],int N)
{
	int i,j,swap=0;
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(a[j+1]<a[j])
			{
				swap=a[j+1];a[j+1]=a[j];a[j]=swap;
			}
		}
	}
}

int main()
{
	int N,K;
	cin>>N>>K;
	int i;
	int a[N];
	for (i=0;i<N;i++)
	{
	  cin>>a[i];
	}
	bubble_sort(a,N);
	/*for (i=0;i<N;i++)
	  cout<<a[i];
	cout<<endl;*/
	cout<<a[K-1]<<endl;
return 0;
}
