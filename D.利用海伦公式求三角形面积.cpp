/*输入
 
第1行是一个整数n，表示随后有n组数据。每组数据占一行，包含三个整数a、b、c，以空格隔开，分别代表三角形的三条边的边长。
 
输出
 
对每组数据，如果a、b、c能构成三角形，则输出三角形的面积，结果保留两位小数；如果不能构成三角形，则输出“不能构成三角形”，并换行。*/ 
 


#include<iostream>
#include<cmath>//在C中是math.h,到了C++要记得变为cmath 
#include<iomanip>//注意这个库函数 
using namespace std;

int istriangle(int a,int b,int c)
{
	if(a+b>c&&b+c>a&&a+c>b)
		return 1;
   return 0;
}//判断是否为三角形 


int main()
{
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		int a,b,c;
	    cin>>a>>b>>c;
	    double p;
	    p=(a+b+c)/2.0;//记得是2.0而不是2,否则p的精度会丢失 
	    if (istriangle(a,b,c)==0)
	    {
		   cout<<"Failed";
	    }
	    else
	    {
		   double s;
		   s=sqrt(p*(p-a)*(p-b)*(p-c));
		  // cout<<setiosflags(ios::fixed)<<setprecision(2)<<p<<endl;
	    cout.setf(ios::fixed);
		cout<<setprecision(2)<<s<<endl;//保留两位小数的方法 
		}
	} 
return 0;
}
