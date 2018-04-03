/*C: 100!的末尾有多少个零？
描述
思考100!的末尾有多少个零？

提示1：直观上会先求出100！的值，然后计算其末尾有多少个零。事实上，由于计算机所能表示的整数范围有限，这种方式是不可行的。

提示2：观察一个数末尾产生零的条件。不难看出：一个整数末尾每增加一个零，即相当于乘了一个10，而10=5*2。

输入
无。

输出
100! 末尾的零的个数。

样例
输入                                  输出
                                         100！末尾0的个数*/ 



#include<iostream>
using namespace std;

int main()
{
	int i,two=0,five=0;
	int j;
	for(i=2;i<=100;i++)
	{
		j=i;
		while(j%2==0&&j>1)
		{
		   j=j/2;
		   two++;
	    }
	}
	for(i=2;i<=100;i++)
	{
		j=i;
		while(j%5==0&&j>1)
		{
		   j=j/5;
		   five++;
	    }
	}
	if(two<five)
	 cout<<two<<endl;
	 else cout<<five<<endl;
return 0;
}
