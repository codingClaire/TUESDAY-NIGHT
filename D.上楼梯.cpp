/*D: ��¥¥��
��N��¥�ݣ�һ�ο��������׻�һ�ף����ж�������¥��ʽ��

����
������N,1<=N<=30

���
��¥��ʽ��

��������
6

�������
13*/

#include<iostream>
using namespace std;

int stair(int n)
{
	if (n==1)return 1;
	if (n==2)return 2;
	return (stair(n-1)+stair(n-2));
}

int main() 
{
	int n;
	cin>>n;
	cout<<stair(n);
return 0;
}
