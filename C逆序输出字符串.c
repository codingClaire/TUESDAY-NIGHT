/*C: ��������ַ���
 
����
 
��������ַ�����
 
����
 
��1����һ������n����ʾ�����n�����ݡ�ÿ������ռһ�У�����һ���ַ�����
 
���
 
��ÿ�����ݣ���������ַ����������С�
 
����
 
����
���
3
abcd
1234567
qwertyuiop
dcba
7654321
poiuytrewq
 
 
��ʾ
 
��ӱ�׼����������ݣ�������������׼�����
�������ݰ����������ݣ����Զ�һ�飬����һ�飬���һ��*/ 

#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   char ch[100];
	   scanf("%s",ch);	
	   int len;
	   len=strlen(ch);
	   int j;
	   for( j=len-1;j>=0;j--)
	   {
	   	printf("%c",ch[j]);
	   }
	  printf("\n");
	}
return 0;
}
