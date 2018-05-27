#include<iostream>
#include<cstring>

using namespace std;

struct deandbi
{
	int a;
	char b[8];
}; 
struct code
{
	int flag,num;
 };

int main()
{
	int N;
	cin>>N;
	N=N/8;
	deandbi first[N];
	int i;
	for(i=0;i<N;i++)
	{
		cin>>first[i].a;
		for(int j=0; j < 8; j++)  
        {   
           if(first[i].a & (1 << (7 - j)))
		   {
		     first[i].b[j]='1';
	       }
                 
           else  
           {
           	first[i].b[j]='0';
		   }
        }
	}//存入结构体
	
	code second[9*N*N];
	int k=0,j;
	for(k=0;k<9*N*N;k++)
	{
		second[k].num=0;
	}
	k=0;//初始化 
    /*for(i=0;i<N;i++)
	{
		for(j=0;j<8;j++)
		{
			cout<<first[i].b[j];
		}
		
    }cout<<endl;*/
	for(i=0;i<N;i++)
	{
		for(j=0;j<8;j++)
		{
			if(first[i].b[j]=='0')
			{
				second[k].flag=0;
				second[k].num++;
				if(first[i].b[j+1]=='1'&&j<=6)
				{
					k++;
			      //break;
				}
				else if(j==7&&i<=6&&first[i+1].b[0]=='1')
				k++;	  
			}
			else 
			{
				second[k].flag=1;
				second[k].num++;
				if(first[i].b[j+1]=='0'&&j<=6)
				{
					k++;
					//break;
				}
				else if(j==7&&i<=6&&first[i+1].b[0]=='0')
				k++;
			}
		 } 
	}//code类型 存储了是0/1 以及0/1的位数 
	/*for(j=0;j<=k;j++)
	{
		cout<<second[j].flag<<" "<<second[j].num<<endl; 
		
	} */
	for(j=0;j<=k;j++)
	{
		//cout<<second[j].flag<<" "<<second[j].num<<endl; 
		if(second[j].flag==1)
		  second[j].num=second[j].num+128;
		cout<<second[j].num<<" ";
	} 
	//cout<<endl;
return 0;
}

/*
//二进制转十进制 
int bitode(string str)  
{  
  int i, j,deci=0;   
  for(i = 0, j = 0;j<str.size(); i++)  
  {  
    if(str[i] == '1')  
    {  
      deci|= (1 << (str.size()-1-j));//mask=mask|(1<<(size-1-j) 
	  //mask或上1按二进制左移(size-1-j)的值，然后mask的值会自动转化位二进制  
      j++;  
    }  
    else if(str[i] == '0')  
      j++;  
  }  
  return deci;  
}

//十进制转二进制
string detobi(int deci)  
{   
  string str;  
  for(int i = 0; i < 8; i++)  
  {   
    if(deci & (1 << (7 - i)))  
      str[i] = '1';  
    else  
      str[i] = '0';  
  }  
  //str[i] = 0;  
  return str;  
}  */
