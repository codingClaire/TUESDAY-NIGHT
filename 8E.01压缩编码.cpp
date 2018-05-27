/*E: 01串压缩编码
描述

 

计算机中的文件都是由一串01串组成的，我们可以通过某种方式压缩它。

我们可以用一个十进制数串（长度不超过1000），代表一个长度不超过8000的01串。例如十进制串15  1  128代表01串00001111  00000001  10000000。01串可以划分成连续的片段（即连续成段的0或1），如上例可划分成0000  1111 0000000  11  0000000五个片断。我们可以用一个字节（8位）的二进制表示一个片断，表示方法为：字节的最高位代表此片段的颜色是0还是1，低7位代表此片段的长度，所以上例就可以表示为：00000100  10000100  00000111  10000010  00000111。注意到现在有5个字节，每个字节可以用一个不超过255的十进制数表示，所以我们又可以把它表示成4  132  7  130  7。

我们再看看整个编码压缩过程：

15         1        128

00001111  00000001  10000000

0000      1111     0000000     11      0000000

00000100  10000100  00000111  10000010   00000111

   4        132         7        130        7

 

可以保证所有输入数据连续的0或1片段的长度均小于128。

 

输入

       输入数据只有一行，第一个数N是一个可被8整除的不大于8000的自然数，代表编码的01串长度。接下来N/8个十进制整数。

 

输出

       输出只有一行，输出最后的十进制压缩编码。

 

样例输入

24 15 1 128

 

样例输出

4 132 7 130 7*/ 



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
