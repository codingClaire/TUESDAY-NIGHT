/*G: ����ʦ�İ�
����ʦ�İ�

 

Description:

����ʦ��n����Ŀ����ϣ����һ�ſ����Ծ�����ѡȡһ����������Ŀ���ڲ��ı������Ŀ˳�������£�Ҫ��ѡȡ����Ŀ�Ѷ��ϸ������Ϊ�˷�ֹ����AK������ʦϣ���ڿ����г������ܶ����Ŀ���������Ŀ������

 

Input:

ÿ�����Ե�ֻ��һ��������ݡ�

��һ��һ������n��ʾ��Ŀ�������ڶ���n������ai��ʾ��Ŀ�Ѷȡ�

���Ե�

n

ai

1

1<=n<=1e3

1<=ai<=1e9

2

3

4

5

1<=n<=1e5

 

Output:

���һ������ans��һ����������Ŀ���������ֵ

 

Sample Input:

5

1 2 3 1 5

 

Sample Output:

4

 

Hint:

����ѡȡ��1��2��3��5��*/




#include <iostream>  
using namespace std;  

int lis(int *a, int len)  
{  
    int longsub[len];  
    for (int i=0; i<len; i++)  
        longsub[i] = 1;//ȫ����ʼ��Ϊ1  
  
    for (int j=1;j<len;j++) 
	{  
        for (int i=0;i<j;i++) 
		{  
            if (a[j]>a[i] && longsub[j]<longsub[i]+1)
                longsub[j]=longsub[i]+1;
        }  
    }  
  
    int max = 0;  
    for (int j=0; j<len; j++) 
	{    
        if (longsub[j]>max) 
		   max=longsub[j];
    }  
    return max;  
}  
  
int main()  
{  
   	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
       cin>>a[i]; //�Ѷ�����
    int s= lis(a,n);  
    cout<<s<< endl;  
return 0;  
}  
