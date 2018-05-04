#include <iostream> 
using namespace std;  
  
  
int main()  
{  
    int m,n;
    int a[100][100]={0};  
    cin>>m>>n; 
	int i=0,j=0,l,k=1; 
    for(l=0;l<m+n-1;l++) //°´ÕÕÔªËØ±éÀú     
    {  
           
            if((i+j)%2==1)    
            {  
                while(i<m&&j>=0)  
                {
					a[i++][j--]=k;	
					k++;
				}
                      
                if(i==m)
				{  
                    j+=2;
					i=m-1; 
				} 
                else if(j<0)  
                    j=0;
            }  
  
            else              
            {  
                while(j<n&&i>=0)  
                    a[i--][j++]=k++;  
                if(j==n)  
                {
                	i+=2;j=n-1; 
				}
                else if(i<0)  
                    i=0;
            }  
    }
	   
    for(i=0;i<m;i++)       
    {  
        for(j=0;j<n;j++)  
        cout<<a[i][j]<<' ';  
        cout<<endl;  
    }  
    return 0;  
}  
