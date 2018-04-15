/* A: 计算1+（1+2）+（1+2+3）+（1+2+3+......+n)的值

描述：   
 从键盘输入一个正整数n（1~1000），然后计算1+（1+2）+（1+2+3）+...+（1+2+3+...+n）的值

输入：
    正整数n
输出：
    1+（1+2）+（1+2+3）+...+（1+2+3+...+n）的值

示例：
输入：                 输出：
1                       1
10                      220
21                      1771*/ 




#include<iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  int i,product,sum=0;
  for(i=1;i<=n;i++)
  {
  	product=(1+i)*i/2;
  	sum=sum+product;
  }	
  cout<<sum;
return 0;
}
