/*E: ����������Լ��
����
 
���������������Լ��
 
����
 
ÿ�������������1��������������ʽΪ
   ��1�У����ݵ�����n
   ��2�У���һ������(����֮���Զ��Ÿ�������
   ��3�У��ڶ������ݣ�
   ...
   ��n+1�У���n������
 
���
 
���ÿ�������е����Լ��
 
����
 
����
���
3
18,27,15,33
120,328,56,264
78,143,260,52
3
8
13*/


#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else b=b-a;
	}
   return a;
}//��������� 

int main()
{
	int n;
	cin>>n;
	int m;
	for(m=0;m<n;m++)
	{
		int a[4];
	int i;
	for(i=0;i<4;i++)
	 scanf("%d,",&a[i]);
    int cd=a[0];
	for(i=1;i<4;i++)
	   cd=gcd(cd,a[i]);
		cout<<cd<<endl;	
	}	 
 } 

/*ֻ������EOF���� 
#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else b=b-a;
	}
   return a;
}//��������� 

int main()
{
    int i,len=0;
	int a[100];
	int n,m;
	cin>>n;
	for(m=0;m<n;m++)
	{
		while(scanf("%d,",&a[len])==1)
		{
			 len++;
		}
		
	 int cd=a[0];      
	    for(i=1;i<len;i++)
	    {
	    	cd=gcd(cd,a[i]);
		}
		cout<<cd<<endl; 
	    len=0;  	
    }
return 0;
 } 

*/ 






/*
�ܱ����� 
int main()
{
	int i=0,len=0;
	int a[100];
	int n,m;
	cin>>n;
	for(m=0;m<n;m++)
	{
		while(scanf("%d",&a[i])==1)
	        len++;	
	    int min=a[0];
	    for (i=0;i<len;i++)
    	   if(a[i]<min)
               min=a[i];//���ҵ����������е���Сֵ 
	    int j,flag;
	    for(i=min;i>=2;i--)
	    {
	       for(j=len-1;j>=0;j--)
	       {
	         if (a[j]%i!=0) 
		     {
		     	flag=0;
		     	break;//ֻҪ����һ��������������������������flagΪ0 
		     }
		     else flag=1;
	        }
	       if (flag==1)//����forѭ�����flagʼ����1˵�������Ա����� �ҵ���Լ�� 
	       {          //�����ʱflag��0�Ͳ������Լ�� ��С������1�ٴ���֤ 
	        	cout<<i<<endl;
	            break;
	       }	
    	}
	} 
return 0;	
}*/ 
