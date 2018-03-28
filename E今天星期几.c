/*E: 今天星期几
描述
已知1900年1月1日是星期一，问这天之后的任意一天是星期几？

输入
1900年1月1日以后的任一合法日期，格式为yyyy-MM-dd，如2000-01-01。

输出
输入日期所对应的星期。

样例
输入
输出
2017-11-11
Saturday*/ 

#include<stdio.h>
int isleapyear(int year)
{
	int judge;
	if((year%4==0&&year%100!=0)||year%400==0)
	judge=1;
	else judge=0;
	return judge;
} 
int main()
{
	int year,month,day;
	scanf("%d-%d-%d",&year,&month,&day);//输入 
	long int daynumber=0;
	int i;
	if(year>1900)
	{
		for  (i=1900;i<year;i++)
	    {
	     if(isleapyear(i)==1)
	        daynumber=daynumber+366;
	     else daynumber=daynumber+365;
	    }//年份的天数统计
	}
	int monthday[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int j;
	if(month>2&&isleapyear(year)==1)
		daynumber++; 
	for(j=1;j<month;j++)
		daynumber=daynumber+monthday[j];//月份的天数统计 
    
    daynumber=daynumber+day;
	switch(daynumber%7)
	{
		case 1:printf("Monday\n");break;
		case 2:printf("Tuesday\n");break;
		case 3:printf("Wednesday\n");break;
		case 4:printf("Thursday\n");break;
		case 5:printf("Friday\n");break;
		case 6:printf("Saturday\n");break;
		case 0:printf("Sunday\n");break;
	}//输入的天数距离1900年1月1日有几周 
	
return 0;
}
