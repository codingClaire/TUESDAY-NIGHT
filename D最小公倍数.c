/*D: ��С������
����
 
��������������m��n�����m��n����С��������
 
����
 
��1����һ������T����ʾ�����T�����ݡ�ÿ������ռһ�У����������������ÿո������
 
���
 
��ÿ���������������������С�������������С�
 
����
 
����
���
3
2 3
3 9
4 10
6
9
20*/ 

#include<stdio.h>
int main()
{
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		int times;
		times=m*n;
		int i,swap;
		if(m>n){
			swap=m;m=n;n=swap;
		}
		for(i=1;i<=m;i++)
		{
			if(m%i==0&&n%i==0)
			times=times/i;
		}
		printf("%d\n",times);
	}
	  
return 0;
}
