/*����
 
��1����һ������n����ʾ�����n�����ݡ�ÿ������ռһ�У�������������a��b��c���Կո�������ֱ���������ε������ߵı߳���
 
���
 
��ÿ�����ݣ����a��b��c�ܹ��������Σ�����������ε���������������λС����������ܹ��������Σ�����������ܹ��������Ρ��������С�*/ 
 


#include<iostream>
#include<cmath>//��C����math.h,����C++Ҫ�ǵñ�Ϊcmath 
#include<iomanip>//ע������⺯�� 
using namespace std;

int istriangle(int a,int b,int c)
{
	if(a+b>c&&b+c>a&&a+c>b)
		return 1;
   return 0;
}//�ж��Ƿ�Ϊ������ 


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
	    p=(a+b+c)/2.0;//�ǵ���2.0������2,����p�ľ��Ȼᶪʧ 
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
		cout<<setprecision(2)<<s<<endl;//������λС���ķ��� 
		}
	} 
return 0;
}
