#include<iostream>
#include<string>
using namespace std;

int main()
{
	string ip;
	int dot[30],k=0;
	while(cin>>ip)
	{
		for(int i=0;i<ip.length();i++)
		{
			if(ip[i]=='.')
			{
				dot[k]=i;
				k++;
			}
		}	
		string str[4];
		int flag=0;
		str[0]=ip.substr(0,dot[0]);
		str[1]=ip.substr(dot[0]+1,dot[1]-dot[0]-1);
		str[2]=ip.substr(dot[1]+1,dot[2]-dot[1]-1);
		str[3]=ip.substr(dot[2]+1,ip.length()-dot[2]);
        
		//for(k=0;k<4;k++)
		//cout<<str[k]<<endl;
		for (k=0;k<4;k++)
		{
		    //cout<<str[k]<<endl;
		    int m;
		    for(m=0;m<str[k].length();m++)
		    {
		    	if (str[k][m]>'9'||str[k][m]<'0')
		        {
		  	     cout<<"NO"<<endl;
		  	     //flag=1;
		         break;
		        }
			}
			if (flag==1)break;//排除其他符号 
		    if(str[k].length()>4)
		    {
		  	    cout<<"NO"<<endl;
		  	    //flag=2;
		  	    break;
		    }//排除长数字 
		    else if(str[k].length()==3&&(100*(str[k][0]-'0')+10*(str[k][1]-'0')+str[k][2]-'0')>=256)
		     {
			    cout<<"NO"<<endl;
			    //flag=3;
			    break;
		     }//三位数但超出256 
		     else 
		     {
		     cout<<"YES"<<endl;
			 break;	
			 }
	    }
	    //cout<<flag<<endl;
	}
	return 0; 
 } 
