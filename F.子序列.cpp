/*F: ������
����
 
���������ַ���s��t���ж��Ƿ���Դ�s��ɾ��0�������ַ�(�����ַ�˳�򲻱�)�õ��ַ���t��
 
����

�ֱ����������ַ���s��t���ֱ�ռһ�С�

���
 
����ƥ�����������YES
������ƥ�����������NO 

����
����
���
subsequence
sequence
YES*/

#include<iostream>
#include<string>
using namespace std;

bool issubsequence(string s,string subs)
{
	int i,j=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]==subs[j])
		   j++;
	}
	if(j==subs.length())
	return true;
	else return false; 
}

int main()
{
	string subs,s;
	cin>>s;
	cin>>subs;
	if(issubsequence(s,subs))
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
return 0;	
}












/*#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main() 
{   
 	char s,t;
	cin>>s;
	cin>>t;
	cout<<"YES"<<endl; 
return 0;
}*/
