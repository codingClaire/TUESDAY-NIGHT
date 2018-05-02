#include<iostream>
using namespace std; 
int main()
{
	int decimal,count=0;
	cin>>decimal;
	int binary[30];
	int j=0;
    do 
    {
	    binary[j]=decimal%2;
        decimal=decimal/2;
        if(binary[j]==0)
		{
		 count++;
		}
		  j++;
	    }while(decimal>1);//十进制转二进制 
		cout<<count<<endl;	
 return 0;
}

        
