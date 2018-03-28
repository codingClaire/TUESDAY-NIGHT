/*A: 三角形形状
描述
 
从键盘输入a, b, c三个整数，作为三角形的三条边长，判断这是一个直角/锐角/钝角三角形？
 
输入
 
依次输入三个整数，分别表示a，b，c，数字间用逗号隔开。
 
输出
 
如果是锐角三角形，输出字符串“acute”；
如果是直角三角形，输出字符串“right”；
如果是钝角三角形，输出字符串“obtuse”；
如果无法构成三角形，输出字符串“illegal”。
 
样例
 
输入
输出
3,4,5
1,2,1
6,5,4
right
illegal
acute
 
 
提示
 
请从标准输入读入数据，将结果输出到标准输出*/ 


#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b<=c||b+c<=a||a+c<=b)
	{
		printf("illegal\n");
    }
	else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
	{
	  printf("right\n");
	}
	else if(a*a>b*b+c*c||b*b>a*a+c*c||c*c>a*a+b*b)
	{
		printf("obtuse\n");
	}
	else if(a*a<b*b+c*c||b*b<a*a+c*c||c*c<a*a+b*b)
	{
		printf("acute\n");
	}
return 0;
}


