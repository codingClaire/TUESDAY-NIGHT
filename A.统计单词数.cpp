/*A: ͳ�Ƶ�����
����
 
����һ���ַ������ж�������������ʣ�����֮����ɿո����ָ������ַ����������ո�����������ַ���
 
����
 
���������һ�У�Ϊһ���ַ�������֪����С��100�����س�����
 
���
 
���һ����������ʾ�м�������
 
����
 
����
���
How old are you
4*/ 



#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	string ch;
	int i=0;
	int num=0; 
    getline(cin,ch,'\n');
	int len;
	len=ch.length();
	for(i=0;i<len;i++)
	{
	  if(ch[i]==' '||ch[i]==',')
	    {
	  	num++;
	    }
	}
	if (num==0) cout<<num<<endl;
	else cout<<num+1<<endl;
return 0;
} 

/*do
	{
		i++;j=0;
		cin>>ch[i][j];
		while(ch[i][j]!=' '&&ch[i][j]!='\n') 
		{
	     	j++;
			cin>>ch[i][j];	
		}
	//}while(ch[i][j]!='\n');
    cout<<i;*/
