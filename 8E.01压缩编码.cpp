/*E: 01��ѹ������
����

 

������е��ļ�������һ��01����ɵģ����ǿ���ͨ��ĳ�ַ�ʽѹ������

���ǿ�����һ��ʮ�������������Ȳ�����1000��������һ�����Ȳ�����8000��01��������ʮ���ƴ�15  1  128����01��00001111  00000001  10000000��01�����Ի��ֳ�������Ƭ�Σ��������ɶε�0��1�����������ɻ��ֳ�0000  1111 0000000  11  0000000���Ƭ�ϡ����ǿ�����һ���ֽڣ�8λ���Ķ����Ʊ�ʾһ��Ƭ�ϣ���ʾ����Ϊ���ֽڵ����λ�����Ƭ�ε���ɫ��0����1����7λ�����Ƭ�εĳ��ȣ����������Ϳ��Ա�ʾΪ��00000100  10000100  00000111  10000010  00000111��ע�⵽������5���ֽڣ�ÿ���ֽڿ�����һ��������255��ʮ��������ʾ�����������ֿ��԰�����ʾ��4  132  7  130  7��

�����ٿ�����������ѹ�����̣�

15         1        128

00001111  00000001  10000000

0000      1111     0000000     11      0000000

00000100  10000100  00000111  10000010   00000111

   4        132         7        130        7

 

���Ա�֤������������������0��1Ƭ�εĳ��Ⱦ�С��128��

 

����

       ��������ֻ��һ�У���һ����N��һ���ɱ�8�����Ĳ�����8000����Ȼ������������01�����ȡ�������N/8��ʮ����������

 

���

       ���ֻ��һ�У��������ʮ����ѹ�����롣

 

��������

24 15 1 128

 

�������

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
	}//����ṹ��
	
	code second[9*N*N];
	int k=0,j;
	for(k=0;k<9*N*N;k++)
	{
		second[k].num=0;
	}
	k=0;//��ʼ�� 
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
	}//code���� �洢����0/1 �Լ�0/1��λ�� 
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
//������תʮ���� 
int bitode(string str)  
{  
  int i, j,deci=0;   
  for(i = 0, j = 0;j<str.size(); i++)  
  {  
    if(str[i] == '1')  
    {  
      deci|= (1 << (str.size()-1-j));//mask=mask|(1<<(size-1-j) 
	  //mask����1������������(size-1-j)��ֵ��Ȼ��mask��ֵ���Զ�ת��λ������  
      j++;  
    }  
    else if(str[i] == '0')  
      j++;  
  }  
  return deci;  
}

//ʮ����ת������
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
