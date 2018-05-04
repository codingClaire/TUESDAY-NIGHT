/*C: 打酱油
描述
 
小明带着N元钱去买酱油。酱油10块钱一瓶，商家进行促销，每买3瓶送1瓶，或者每买5瓶送2瓶。请问小明最多可以得到多少瓶酱油。 
 
输入
 
输入的第一行包含一个整数N，表示小明可用于买酱油的钱数。N是10的整数倍，N不超过300。
 
输出
 
输出一个整数，表示小明最多可以得到多少瓶酱油。
 
样例
 
输入
输出
40
5
 
输入
输出
80
11
 
 
样例说明
 
把80元分成30元和50元，分别买3瓶和5瓶，其中3瓶送1瓶，5瓶送2瓶，共得到11瓶。*/

#include<iostream>
using namespace std;

int main()
{
	int n,sum;
	cin>>n;
	sum=n/10;
	int five,three;
	five=sum/5;
	three=(sum%5)/3;
	cout<<sum+five*2+three<<endl;
	
return 0;	
 } 
