/*E: 并查集
Time Limit: 1000ms
Memory Limit: 128M

Description:
第一行有两个n, m。表示集合的个数与操作的个数。
接下来有m行，每行有以下两种操作的其中一种。
U x y 将集合x与集合y合并
Q x y 询问集合x与集合y是否被合并在了一起，如果已被合并在一起输出Y，否则输出N。

Sample Input:
4 9
Q 1 2
U 1 2
Q 1 2
Q 3 4
U 3 4
Q 3 4
Q 2 4
U 1 3
Q 2 4

Sample Output:
N
Y
N
Y
N
Y

Hint:
对于80%的数据1 <= n, m <= 1000
对于100%的数据1 <= n, m <= 1000000

*/

#include<iostream>
using namespace std;

int find(int x,int*father)
{
	int r=x; 
	while(father[r]!=r)
	  r=father[r];
	return r;
}

void join(int x,int y,int *father)
{
	int fx=find(x,father),fy=find(y,father);
	if(fx!=fy)
	  father[fx]=fy;
}

int main() 
{
	long n,m,i;//n个集合，m个操作 
	cin>>n>>m;
	int father[n+1];
	for(i=1;i<=n;i++)
	{
		father[i]= i;//每一节点都指向自己 
	}
	for(int i=0;i<m;i++)//开始操作 
	{
	  char oper;
	  int x,y;
	  cin>>oper>>x>>y;
	  if(oper=='Q')
	  {
	  	 if(find(x,father)==find(y,father))
	  	    cout<<"Y"<<endl;
	  	 else cout<<"N"<<endl;
	  }
	  else if(oper=='U')
	  {
	     join(x,y,father);
	  } 
	}
return 0; 
}
