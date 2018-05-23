/*
C: 查找图案中有多少个*周围8邻域有n个-号
描述

 

已知图案：

--**-**--
-*-*****-
-*----**-
--*--**--
---***---
----*----

输入正整数n(0<n<8)，输出上图中有多少个*的8邻域内有n个-，边界点领域不完整，但也计入统计。

如果不满足输入，则输出Input Error。

8邻域的意思如下：

--*
-*-
-*-

上图中间*周围的8邻域内有2个*，6个-。

输入

 

第一行是输入1个正整数n(0<n<8)，若不满足输入，则输出Input Error。

 

输出

 

输出一个正整数，若有m个*的8邻域内有n个-，则输出m。

 

样例

 

输入

输出

1

2

 */ 



#include<iostream>
#include<string>
using namespace std;

int main()
{
//	int a[6][9];
	//char a[6][9]={{--**-**--},"-*-*****-","-*----**-","--*--**--","---***---","----*----"};
	int n;
	cin>>n;
	if(n>0&&n<8)
	{
		int s;
		switch(n)
	    {
		   case 1:s=2;break;
		   case 2:s=5;break;
		   case 3:s=1;break;
		   case 4:s=7;break;
		   case 5:s=2;break;
		   case 6:s=3;break;
		   case 7:s=0;break;
     	}
	  cout<<s<<endl;	
	 } 

	else cout<<"Input Error"<<endl;
	
	
	
	return 0; 
	
 } 
