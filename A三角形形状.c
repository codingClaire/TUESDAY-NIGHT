/*A: ��������״
����
 
�Ӽ�������a, b, c������������Ϊ�����ε������߳����ж�����һ��ֱ��/���/�۽������Σ�
 
����
 
�������������������ֱ��ʾa��b��c�����ּ��ö��Ÿ�����
 
���
 
�������������Σ�����ַ�����acute����
�����ֱ�������Σ�����ַ�����right����
����Ƕ۽������Σ�����ַ�����obtuse����
����޷����������Σ�����ַ�����illegal����
 
����
 
����
���
3,4,5
1,2,1
6,5,4
right
illegal
acute
 
 
��ʾ
 
��ӱ�׼����������ݣ�������������׼���*/ 


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


