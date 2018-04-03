/*B: K大数
描述
 
计算一个数组A[N]（N<=100）中，第K(1>=K && K <=N)小的数。
 
输入
 
第1行是一个整数N，表示数组A的大小，然后接收一个整数K（1>=K && K <=N）。最后读入N个整数，表示数组A的每一个元素。注意：数组元素是无序的，且任意两个元素不相等！！！
 
输出
 
输出数组A中第K小的元素
 
样例
 
输入
输出
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
