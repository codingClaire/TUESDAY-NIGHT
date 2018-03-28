/*C: 逆序输出字符串
 
描述
 
逆序输出字符串。
 
输入
 
第1行是一个整数n，表示随后有n组数据。每组数据占一行，包含一个字符串。
 
输出
 
对每组数据，逆序输出字符串，并换行。
 
样例
 
输入
输出
3
abcd
1234567
qwertyuiop
dcba
7654321
poiuytrewq
 
 
提示
 
请从标准输入读入数据，将结果输出到标准输出。
输入数据包含多组数据，可以读一组，计算一组，输出一组*/ 

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
