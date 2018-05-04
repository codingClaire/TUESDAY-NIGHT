#include<iostream>
using namespace std;

int main()
{
	int m,i;
	cin>>m;
	for(i=0;i<m;i++)
	{
		long int a,n;
		cin>>a>>n;
		int k=n%a;
		while(n!=0&&k!=0)
		{
		  if(n>k) 
		  {
		  	n=n%k;
		  	x=n/k;
		  }
		  else k=k%n;
		  
		}
		
		  
	}
    
	
return 0;	
 } 
  
