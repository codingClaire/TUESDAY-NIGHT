/*B: 9进制数转换为2进制数
描述
 
输入一个9进制数，输出其对应的2进制数
 
输入
 
第一行是一个整数n，表示一共有n组测试用例；
下面一共有n组输入，每组输入为一个正整数，表示一个9进制数
 
输出
 
对于每一组输入数据，输出其对应2进制数，每组输出单独占一行
 
样例
 
输入
输出
2
10
1234
1001
1110011010*/ 


#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main() 
{   
    int n,m;
    cin>>n;
    for(m=0;m<n;m++)
    {
    	char nine[20];
	    cin>>nine;
	    int len;
	    len=strlen(nine);
	    int i,decimal=0;
	    for(i=0;i<len;i++)
	   {
	   	 nine[i]=nine[i]-'0';
	   	 decimal=decimal+ nine[i]*pow(9,len-1-i);
	   }//九进制转十进制 
        int binary[30];
        int j=0;
        do 
     	{
	    	binary[j]=decimal%2;
            decimal=decimal/2;
             j++;
	    }while(decimal>1);//十进制转二进制 
	    cout<<decimal;
	     int k;
	     for(k=j-1;k>=0;k--)
	    {
	     	cout<<binary[k]; 
	    }
	    cout<<endl;	
	}
return 0;
}
