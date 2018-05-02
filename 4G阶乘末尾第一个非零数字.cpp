#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n],eightn,lastdigit;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		eightn=a[i]/10;//十的阶乘末位是8，先统计8的个数 
		if(a[i]>=10)
		{
			switch(eightn%4)
		    {
			case 0:lastdigit=6;break;
			case 1:lastdigit=8;break;
			case 2:lastdigit=4;break;
			case 3:lastdigit=2;break;
	     	}
		} 
		while(a[i]%10==0)
		{
			a[i]=a[i]/10;
		}//消掉多余的0 
		int j;
		for(j=1;j<=a[i]%10;j++)
		{
			lastdigit=lastdigit*j;
			
		}cout<<lastdigit<<endl;
		int ld=0;
		while(ld==0)
		{
			ld=lastdigit%10;
			lastdigit=lastdigit/10;
			cout<<ld<<endl;
		}
		cout<<ld<<endl;
	}
return 0;
}
