/*: ����������
����
һ��������������������Ҷ�����֮Ϊ���������ʹ������������֮Ϊ����������һ���ģ����������ͽл���������ȡһ����������������ǻ������������������ĵ�������ӣ�����Ͳ��ǻ����������ظ��������裬һֱ����û�����Ϊֹ�����磺68���154��68+86�����ٱ��605��154+451���������1111��605+506������1111�ǻ�������

����
һ����������С��2^31��
���
����õ��Ļ���������������ڻ����������߻���������2^31������No��
����1
����                           ���
27228                        219912
����2
����                               ���
27568308                      No
����3
����                          ���
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
	      char b[len+1];//�洢����ĺ� 
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
