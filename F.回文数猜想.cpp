/*: 回文数猜想
描述
一个正整数，如果从左向右读（称之为正序数）和从右向左读（称之为倒序数）是一样的，这样的数就叫回文数。任取一个正整数，如果不是回文数，将该数与他的倒序数相加，若其和不是回文数，则重复上述步骤，一直到获得回文数为止。例如：68变成154（68+86），再变成605（154+451），最后变成1111（605+506），而1111是回文数。

输入
一个正整数，小于2^31。
输出
计算得到的回文数。如果不存在回文数，或者回文数大于2^31则输入No。
样例1
输入                           输出
27228                        219912
样例2
输入                               输出
27568308                      No
样例3
输入                          输出
89                             No*/


#include<iostream>
#include<cstring>
using namespace std;

int ispalindrome(char a[])
{
	int len;
	len=strlen(a);
	int i;
	for(i=0;i<len/2;i++)
	{
		if(a[i]!=a[len-i-1])
		  return 0;
	}
	return 1;
}

int main()
{
	char a[15]; 
	cin>>a;
	int i,len;
	len=strlen(a);
	if(ispalindrome(a)==1)
	cout<<a<<endl;
	else 
	{
	  do
	  {
	    for(i=0;i<len;i++)
	    {
	      char b[len+1];//存储数组的和 
	      b[len-i]=a[i]+a[len-1-i]-'0';
		  if (i>=11) 
		  {
		  	cout<<"No"<<endl;
		    break;
		  }
		  if(a[i]>=58)
	      {
	      	a[i]=a[i]-10;
	        a[i+1]++;
		  }
		}
	  }while(ispalindrome(a)==0);
	 if(i<11) cout<<a<<endl;
	}
return 0;
 } 
