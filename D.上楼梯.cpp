/*D: 上楼楼梯
上N阶楼梯，一次可以走两阶或一阶，问有多少种上楼方式。

输入
正整数N,1<=N<=30

输出
上楼方式数

样例输入
6

样例输出
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
