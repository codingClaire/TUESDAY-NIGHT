/*G: Zig-Zagģʽ������
����

��һ��m*n�������У�����Zig-Zag��˳��������д1,2,3,...m*n��


����

��������m,n��ʾm*n�ľ����������Կո������2<=m,n<100

���

�������

����1
����
���
3 3
1 2 6
3 5 7
4 8 9
����2
����
���
2 3
1 2 5
3 4 6*/

#include <iostream> 
using namespace std;  
  
  
int main()  
{  
    int i=0,j=0,s=0,m,n,k=0; //sΪб����Ŀ  
    int a[100][100]={0};  
    cin>>m>>n;  
    for(s=0;s<m+n-1;s++)      
    {  
            /*������*/  
            if((i+j)%2==1)    
            {  
                while(i<m&&j>=0)  
                    a[i++][j--]=k++;  
                if(i==m)
				{    //�����ƶ�  
                    j+=2;
					i=m-1; 
				} 
                else if(j<0)  
                    j=0;    //�����ƶ�  
            }  
            /*ż����*/  
            else              
            {  
                while(j<n&&i>=0)  
                    a[i--][j++]=k++;  
                if(j==n)  
                {
                	i+=2;j=n-1;  //�����ƶ�
				}
                else if(i<0)  
                    i=0;         //����  
            }  
    }  
    /*���*/  
    for(i=0;i<m;i++)       
    {  
        for(j=0;j<n;j++)  
        cout<<a[i][j]+1<<' ';  
        cout<<endl;  
    }  
    return 0;  
}  
