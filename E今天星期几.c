/*E: �������ڼ�
����
��֪1900��1��1��������һ��������֮�������һ�������ڼ���

����
1900��1��1���Ժ����һ�Ϸ����ڣ���ʽΪyyyy-MM-dd����2000-01-01��

���
������������Ӧ�����ڡ�

����
����
���
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
	scanf("%d-%d-%d",&year,&month,&day);//���� 
	long int daynumber=0;
	int i;
	if(year>1900)
	{
		for  (i=1900;i<year;i++)
	    {
	     if(isleapyear(i)==1)
	        daynumber=daynumber+366;
	     else daynumber=daynumber+365;
	    }//��ݵ�����ͳ��
	}
	int monthday[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int j;
	if(month>2&&isleapyear(year)==1)
		daynumber++; 
	for(j=1;j<month;j++)
		daynumber=daynumber+monthday[j];//�·ݵ�����ͳ�� 
    
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
	}//�������������1900��1��1���м��� 
	
return 0;
}
