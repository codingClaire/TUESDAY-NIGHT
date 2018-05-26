/*G: 公共钥匙盒
描述

 

有一个学校的老师共用N个教室，按照规定，所有的钥匙都必须放在公共钥匙盒里，老师不能带钥匙回家。每次老师上课前，都从公共钥匙盒里找到自己上课的教室的钥匙去开门，上完课后，再将钥匙放回到钥匙盒中。

钥匙盒一共有N个挂钩，从左到右排成一排，用来挂N个教室的钥匙。一串钥匙没有固定的悬挂位置，但钥匙上有标识，所以老师们不会弄混钥匙。

每次取钥匙的时候，老师们都会找到自己所需要的钥匙将其取走，而不会移动其他钥匙。每次还钥匙的时候，还钥匙的老师会找到最左边的空的挂钩，将钥匙挂在这个挂钩上。如果有多位老师还钥匙，则他们按钥匙编号从小到大的顺序还。如果同一时刻既有老师还钥匙又有老师取钥匙，则老师们会先将钥匙全还回去再取出。

今天开始的时候钥匙是按编号从小到大的顺序放在钥匙盒里的。有K位老师要上课，给出每位老师所需要的钥匙、开始上课的时间和上课的时长，假设下课时间就是还钥匙时间，请问最终钥匙盒里面钥匙的顺序是怎样的？

 

输入

 

输入的第一行包含两个整数N, K。

接下来K行，每行三个整数w, s, c，分别表示一位老师要使用的钥匙编号、开始上课的时间和上课的时长。可能有多位老师使用同一把钥匙，但是老师使用钥匙的时间不会重叠。

保证输入数据满足输入格式，你不用检查数据合法性。

 

输出

 

输出一行，包含N个整数，相邻整数间用一个空格分隔，依次表示每个挂钩上挂的钥匙编号。

 

样例

 

输入

输出

5 2

4 3 3

2 2 7

1 4 3 2 5



 

 

样例说明

 

第一位老师从时刻3开始使用4号教室的钥匙，使用3单位时间，所以在时刻6还钥匙。第二位老师从时刻2开始使用钥匙，使用7单位时间，所以在时刻9还钥匙。

每个关键时刻后的钥匙状态如下（X表示空）：

时刻2后为1X345；

时刻3后为1X3X5；

时刻6后为143X5；

时刻9后为14325。

 

样例


 

输入

输出

5 7

1 1 14

3 3 12

1 15 12

2 7 20

3 18 12

4 21 19

5 30 9

1 2 3 5 4

 

 

样例说明

 

对于30%的评测用例，1 ≤ N, K ≤ 10, 1 ≤ w ≤ N, 1 ≤ s, c ≤ 30；

对于60%的评测用例，1 ≤ N, K ≤ 50，1 ≤ w ≤ N，1 ≤ s ≤ 300，1 ≤ c ≤ 50；

对于所有评测用例，1 ≤ N, K ≤ 1000，1 ≤ w ≤ N，1 ≤ s ≤ 10000，1 ≤ c ≤ 100。

 */




#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

struct key
   {
   	int num,bor,ret,flag,time;//flag==0 borrow flag==1 return
   };

bool cmp(key k1,key k2)
{
	if(k1.time!=k2.time)
	    return k1.time<k2.time;//时间先后 
	else if(k1.flag!=k2.flag)
	    return k1.flag>k2.flag;//先还后借 
	else return k1.num<k2.num;//同时借或同时还得情况，按照编号 小的处理 
 } 
   
int main()
{
	vector<key> classkey;
	int N,k;//N keys and k teachers
	cin>>N>>k;
	for(int i;i<k;i++)
	{
		int w,s,c;
		cin>>w>>s>>c;
		key ck;
		ck.num=w;
		ck.time=s;
		ck.flag=0;//borrow
		classkey.push_back(ck);//在classkey末尾添加了元素k
		ck.num=w;
		ck.time=c+s;
		ck.flag=1;//return
		classkey.push_back(ck);//再加一个盒子 
		/*用两个盒子的想法非常机智*/
		sort(classkey.begin(),classkey.end(),cmp);
		/*这一次排序就把操作完完全全的按要求的顺序排好了
		vector和algorithm结合*/	 
	}
	int show[N+1];
	int j,len=classkey.size();
	for(j=1;j<=N;j++)
	   show[j]=j;//beginning
	
	for(j=0;j<len;j++)
	{
		if(classkey[j].flag==0)//借 
		{
			for(int k=1;k<=N;k++)
			{
				if(show[k]==classkey[j].num)
				{
					show[k]=0;
					break;
				}
				  
			 } 
		}
		else if(classkey[j].flag==1)//还 
		{
			for(int m=1;m<=N;m++)
			{
				if(show[m]==0)
				{
					show[m]=classkey[j].num;
					break;
				}
			}
		}
	}
	cout<<show[1];
	for(int f=2;f<=N;f++)
	  cout<<" "<<show[f];
	cout<<endl;
return 0;
} 
 
	
	
	
	
	/*int N,k;//N keys and k teachers
	cin>>N>>k;
	int i,room[N],key[N],bor[N],ret[N],time; 
	for(i=0;i<N;i++)
	{
        room[i]=i+1;
		cin>>key[i]>>bor[i]>>time;
		ret[i]=bor[i]+time;
	}
	
	
	for(j=0;j<len;j++)
	{
		key virt=classkey[i];//虚拟的key 复制了一个classkey 
		if(virt.flag==0)//借 
		{
			for(int k=0;k++;k<len)
			{
				if
			 } 
		}
		else if(virt.flag==1)//还 
	}*/
   
