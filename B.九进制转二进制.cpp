/*B: 9������ת��Ϊ2������
����
 
����һ��9��������������Ӧ��2������
 
����
 
��һ����һ������n����ʾһ����n�����������
����һ����n�����룬ÿ������Ϊһ������������ʾһ��9������
 
���
 
����ÿһ���������ݣ�������Ӧ2��������ÿ���������ռһ��
 
����
 
����
���
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
	   }//�Ž���תʮ���� 
        int binary[30];
        int j=0;
        do 
     	{
	    	binary[j]=decimal%2;
            decimal=decimal/2;
             j++;
	    }while(decimal>1);//ʮ����ת������ 
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
