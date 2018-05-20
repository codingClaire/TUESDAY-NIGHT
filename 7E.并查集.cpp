/*E: ���鼯
Time Limit: 1000ms
Memory Limit: 128M

Description:
��һ��������n, m����ʾ���ϵĸ���������ĸ�����
��������m�У�ÿ�����������ֲ���������һ�֡�
U x y ������x�뼯��y�ϲ�
Q x y ѯ�ʼ���x�뼯��y�Ƿ񱻺ϲ�����һ������ѱ��ϲ���һ�����Y���������N��

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
����80%������1 <= n, m <= 1000
����100%������1 <= n, m <= 1000000

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
	long n,m,i;//n�����ϣ�m������ 
	cin>>n>>m;
	int father[n+1];
	for(i=1;i<=n;i++)
	{
		father[i]= i;//ÿһ�ڵ㶼ָ���Լ� 
	}
	for(int i=0;i<m;i++)//��ʼ���� 
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
