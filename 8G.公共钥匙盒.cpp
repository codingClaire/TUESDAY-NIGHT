/*G: ����Կ�׺�
����

 

��һ��ѧУ����ʦ����N�����ң����չ涨�����е�Կ�׶�������ڹ���Կ�׺����ʦ���ܴ�Կ�׻ؼҡ�ÿ����ʦ�Ͽ�ǰ�����ӹ���Կ�׺����ҵ��Լ��ϿεĽ��ҵ�Կ��ȥ���ţ�����κ��ٽ�Կ�׷Żص�Կ�׺��С�

Կ�׺�һ����N���ҹ����������ų�һ�ţ�������N�����ҵ�Կ�ס�һ��Կ��û�й̶�������λ�ã���Կ�����б�ʶ��������ʦ�ǲ���Ū��Կ�ס�

ÿ��ȡԿ�׵�ʱ����ʦ�Ƕ����ҵ��Լ�����Ҫ��Կ�׽���ȡ�ߣ��������ƶ�����Կ�ס�ÿ�λ�Կ�׵�ʱ�򣬻�Կ�׵���ʦ���ҵ�����ߵĿյĹҹ�����Կ�׹�������ҹ��ϡ�����ж�λ��ʦ��Կ�ף������ǰ�Կ�ױ�Ŵ�С�����˳�򻹡����ͬһʱ�̼�����ʦ��Կ��������ʦȡԿ�ף�����ʦ�ǻ��Ƚ�Կ��ȫ����ȥ��ȡ����

���쿪ʼ��ʱ��Կ���ǰ���Ŵ�С�����˳�����Կ�׺���ġ���Kλ��ʦҪ�ϿΣ�����ÿλ��ʦ����Ҫ��Կ�ס���ʼ�Ͽε�ʱ����Ͽε�ʱ���������¿�ʱ����ǻ�Կ��ʱ�䣬��������Կ�׺�����Կ�׵�˳���������ģ�

 

����

 

����ĵ�һ�а�����������N, K��

������K�У�ÿ����������w, s, c���ֱ��ʾһλ��ʦҪʹ�õ�Կ�ױ�š���ʼ�Ͽε�ʱ����Ͽε�ʱ���������ж�λ��ʦʹ��ͬһ��Կ�ף�������ʦʹ��Կ�׵�ʱ�䲻���ص���

��֤�����������������ʽ���㲻�ü�����ݺϷ��ԡ�

 

���

 

���һ�У�����N��������������������һ���ո�ָ������α�ʾÿ���ҹ��Ϲҵ�Կ�ױ�š�

 

����

 

����

���

5 2

4 3 3

2 2 7

1 4 3 2 5



 

 

����˵��

 

��һλ��ʦ��ʱ��3��ʼʹ��4�Ž��ҵ�Կ�ף�ʹ��3��λʱ�䣬������ʱ��6��Կ�ס��ڶ�λ��ʦ��ʱ��2��ʼʹ��Կ�ף�ʹ��7��λʱ�䣬������ʱ��9��Կ�ס�

ÿ���ؼ�ʱ�̺��Կ��״̬���£�X��ʾ�գ���

ʱ��2��Ϊ1X345��

ʱ��3��Ϊ1X3X5��

ʱ��6��Ϊ143X5��

ʱ��9��Ϊ14325��

 

����


 

����

���

5 7

1 1 14

3 3 12

1 15 12

2 7 20

3 18 12

4 21 19

5 30 9

1 2 3 5 4

 

 

����˵��

 

����30%������������1 �� N, K �� 10, 1 �� w �� N, 1 �� s, c �� 30��

����60%������������1 �� N, K �� 50��1 �� w �� N��1 �� s �� 300��1 �� c �� 50��

������������������1 �� N, K �� 1000��1 �� w �� N��1 �� s �� 10000��1 �� c �� 100��

 */




#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

struct key
   {
   	int num,bor,ret,flag,time;//flag==0 borrow flag==1 return
   };

bool cmp(key k1,key k2)
{
	if(k1.time!=k2.time)
	    return k1.time<k2.time;//ʱ���Ⱥ� 
	else if(k1.flag!=k2.flag)
	    return k1.flag>k2.flag;//�Ȼ���� 
	else return k1.num<k2.num;//ͬʱ���ͬʱ������������ձ�� С�Ĵ��� 
 } 
   
int main()
{
	vector<key> classkey;
	int N,k;//N keys and k teachers
	cin>>N>>k;
	for(int i;i<k;i++)
	{
		int w,s,c;
		cin>>w>>s>>c;
		key ck;
		ck.num=w;
		ck.time=s;
		ck.flag=0;//borrow
		classkey.push_back(ck);//��classkeyĩβ�����Ԫ��k
		ck.num=w;
		ck.time=c+s;
		ck.flag=1;//return
		classkey.push_back(ck);//�ټ�һ������ 
		/*���������ӵ��뷨�ǳ�����*/
		sort(classkey.begin(),classkey.end(),cmp);
		/*��һ������ͰѲ�������ȫȫ�İ�Ҫ���˳���ź���
		vector��algorithm���*/	 
	}
	int show[N+1];
	int j,len=classkey.size();
	for(j=1;j<=N;j++)
	   show[j]=j;//beginning
	
	for(j=0;j<len;j++)
	{
		if(classkey[j].flag==0)//�� 
		{
			for(int k=1;k<=N;k++)
			{
				if(show[k]==classkey[j].num)
				{
					show[k]=0;
					break;
				}
				  
			 } 
		}
		else if(classkey[j].flag==1)//�� 
		{
			for(int m=1;m<=N;m++)
			{
				if(show[m]==0)
				{
					show[m]=classkey[j].num;
					break;
				}
			}
		}
	}
	cout<<show[1];
	for(int f=2;f<=N;f++)
	  cout<<" "<<show[f];
	cout<<endl;
return 0;
} 
 
	
	
	
	
	/*int N,k;//N keys and k teachers
	cin>>N>>k;
	int i,room[N],key[N],bor[N],ret[N],time; 
	for(i=0;i<N;i++)
	{
        room[i]=i+1;
		cin>>key[i]>>bor[i]>>time;
		ret[i]=bor[i]+time;
	}
	
	
	for(j=0;j<len;j++)
	{
		key virt=classkey[i];//�����key ������һ��classkey 
		if(virt.flag==0)//�� 
		{
			for(int k=0;k++;k<len)
			{
				if
			 } 
		}
		else if(virt.flag==1)//�� 
	}*/
   
