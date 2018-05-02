#include<iostream>
using namespace std; 
int main()
{
	int n;
	cin>>n;
	int i,a[n]; 
	for(i=0;i<n;i++)
	  cin>>a[i];
	int j,swap,min,index=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			min=a[i];
			if(a[j]<min)
			{
			  min=a[j];	
			  index=j;
			}
		}//找到后面几个数的最小值
		swap=a[index];a[index]=a[i];a[i]=swap;
		int k;
		for(k=0;k<n;k++)
		{
			cout<<a[k]<<" ";
		}
		 cout<<endl;
	}
 return 0;
}

