#include<iostream>
using namespace std;

int exGcd(long a,long b,int &x,int &y)
{
	int t;
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int r=exGcd(b,a%b,x,y);
    t=x; x=y;
    y=t-a/b*y;
    return r;
}

int main()
{
	long a,n;
	while(1)
	{
	    cin>>a>>n;
		if(a==0&&n==0)
		  break;
		else
		{
		  int x1,y1;  
     	  exGcd(a,n,x1,y1);
     	  cout<<x1<<endl;
		}
	}
return 0;
}

/*int exGcd(long a,long b,int x,int y)
{
	int t;
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int r=exGcd(b,a%b,x,y);
    t=x; x=y;
    y=t-a/b*y;
    return r;
}*/
