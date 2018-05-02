#include<iostream>
# include<cstring>
#include<string>
using namespace std;
int main()
{
	  string a,b;
      cin>>a>>b;
      int j,k;
      int c[16]={0};
	  for(j=0;j<a.size();j++)
	    {
	    	for(k=0;k<b.size();k++)
			 {
			 	c[j+k]=c[j+k]+(a[j]-'0')*(b[k]-'0');
			 }
	    }
	    int i;
		int l=a.size()+b.size()-2;
	    for(i=l;i>0;i--) 
        {
			 if(c[i]>=10)
             {
                c[i-1]=c[i-1]+c[i]/10;
                c[i]=c[i]%10;
                //cout<<c[i]<<endl;
             }
        }//处理进位 
 
	    int j2;
		for(j2=0;j2<=l;j2++)
		{
			 cout<<c[j2];
		}
		//cout<<endl;	
return 0;
}
