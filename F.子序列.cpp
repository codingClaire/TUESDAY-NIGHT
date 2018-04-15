/*F: 子序列
描述
 
输入两个字符串s和t，判断是否可以从s中删除0个或多个字符(其他字符顺序不变)得到字符串t。
 
输入

分别输入两个字符串s和t，分别占一行。

输出
 
满足匹配条件，输出YES
不满足匹配条件，输出NO 

样例
输入
输出
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
