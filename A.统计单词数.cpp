/*A: 统计单词数
描述
 
输入一个字符串，判断其包含几个单词（单词之间仅由空格来分隔，且字符串不包含空格以外的特殊字符）
 
输入
 
输入仅包含一行，为一个字符串（已知长度小于100），回车结束
 
输出
 
输出一个整数，表示有几个单词
 
样例
 
输入
输出
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
