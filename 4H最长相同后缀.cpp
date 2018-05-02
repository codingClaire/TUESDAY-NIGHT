#include<iostream>
#include<string>
using namespace std; 

int main()
{
	  string a,b;
	  cin>>a>>b;
	  int i2,swap,m=a.size();
	  for(i2=0;i2<a.size()/2;i2++)
	    {
		    swap=a[i2];a[i2]=a[m-1-i2];a[m-1-i2]=swap;
	    }
	    m=b.size();
	   for(i2=0;i2<b.size()/2;i2++)
    	{
	    	swap=b[i2];b[i2]=b[m-1-i2];b[m-1-i2]=swap;
	    }//反转两个字符串 
	
	if(a==b)
	cout<<a<<endl;
	else if(compare(a,b)==0) cout
	else cout<<"null"<<endl;
	
 return 0;
}
 
