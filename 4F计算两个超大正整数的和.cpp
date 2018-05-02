#include<iostream>
# include<cstring>
#include<string>
using namespace std;


int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
	  string a,b;
      cin>>a>>b;
        int i2,swap,m=a.size();
	    for(i2=0;i2<a.size()/2;i2++)
	    {
		    swap=a[i2];
	    	a[i2]=a[m-1-i2];
	    	a[m-1-i2]=swap;
	    }
	    m=b.size();
	   for(i2=0;i2<b.size()/2;i2++)
    	{
	    	swap=b[i2];
		    b[i2]=b[m-1-i2];
		    b[m-1-i2]=swap;
	    }//反转两个字符串 
      int j,k;
      string swap2;
      if(b.size()>a.size())
      {
      	swap2=a;
      	a=b;
      	b=swap2;
	  }//让a是较长的字符串，如果不是就交换a,b 
	    for(j=0;j<b.size();j++)
	    {
	    	a[j]=a[j]+b[j]-'0';
	    	if(a[j]>9+'0')
	    	{
	    		a[j]=(a[j]-'0')%10+'0';
	    		a[j+1]++;
			}
		}
		m=a.size();
		for(i2=0;i2<a.size()/2;i2++)
	        {
	        	//cout<<a[i2]<<a[i2+1]<<a[i+2]<<endl;
		        swap=a[i2];
	    	    a[i2]=a[m-1-i2];
	    	    a[m-1-i2]=swap;
	        }
		cout<<a<<endl;
	}
return 0;
}
