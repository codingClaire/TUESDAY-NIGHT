/*B: �ж��������ж���λ
����
 
����һ�����������ж��ж���λ��
 
����
 
��1����һ������n����ʾ�����n�����ݡ�
ÿ������ռһ�У�����һ����������
 
���
 
����ÿһ�����ݣ�
�����������������λ����
 
����
 
����
���
3
1
10
100
1
2
3*/ 

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		long int j=10;
		int count=0;
		do
		{
		  		a[i]=a[i]-(a[i]%j);
				j=j*10;
		  		count++;
		}while(a[i]!=0);
		printf("%d\n",count);	
	}
return 0;
}
