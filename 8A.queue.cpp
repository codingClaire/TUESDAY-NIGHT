/*
A: QUEUE
Time Limit: 1000ms 
Memory Limit: 64M 

Description: 
��һ��n����������� 
������ÿ�����������ֲ����е�һ�� 
I x ��x������е��� 
Q   �Ӷ����д�ӡһ��Ԫ�ز��������֤���зǿ� 

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
����80%������ 1 <= n <= 1000 
����100%������ 1 <= n <= 1000000
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
			/*vector<int>::iterator iter=q.begin();//������ָ��vector��ʼ 
			q.insert(iter,t);
			iter++;*/
			q.push_back(t);
		}
		else if(oper=='Q')
		{
			vector<int>::iterator it=q.begin();
			cout<<*it<<endl;//��� 
			q.erase(it);//ɾ�� 
		} 
	} 
return 0;
 } 
