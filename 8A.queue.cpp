/*
A: QUEUE
Time Limit: 1000ms 
Memory Limit: 64M 

Description: 
给一个n，代表操作数 
接下来每行有以下两种操作中的一种 
I x 将x放入队列当中 
Q   从队列中打印一个元素并输出，保证队列非空 

Sample Input: 
6 
I 1 
I 2 
Q 
I 3 
Q 
Q 

Sample Output: 
1 
2 
3 

Hint: 
对于80%的数据 1 <= n <= 1000 
对于100%的数据 1 <= n <= 1000000
*/
#include<iostream>
#include<vector> 
using namespace std;


int main()
{
	int n,i;
	cin>>n;
	vector<int> q;
	char oper;
	for(i=0;i<n;i++)
	{
		cin>>oper;
		if(oper=='I')
		{
			int t;
			cin>>t;
			/*vector<int>::iterator iter=q.begin();//迭代器指向vector开始 
			q.insert(iter,t);
			iter++;*/
			q.push_back(t);
		}
		else if(oper=='Q')
		{
			vector<int>::iterator it=q.begin();
			cout<<*it<<endl;//输出 
			q.erase(it);//删除 
		} 
	} 
return 0;
 } 
