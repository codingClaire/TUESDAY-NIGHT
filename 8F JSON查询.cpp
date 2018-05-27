/*F: JSON��ѯ
����

 

JSON (JavaScript Object Notation) ��һ�������������ݽ�����ʽ����������������ṹ�������ݡ�JSON ��ʽ�еĻ�����Ԫ��ֵ (value)�����ڼ򻯵�Ŀ�ı���ֻ�漰 2 �����͵�ֵ��

����* �ַ��� (string)���ַ�������˫���� " ��������һ���ַ�������Ϊ�գ�������ַ����������г���˫���� "����˫����ǰ��ӷ�б�ܣ�Ҳ������ \" ��ʾ��������ַ�б�� \������������б�� \\ ��ʾ����б�ܺ��治�ܳ��� " �� \ ������ַ������磺""��"hello"��"\"\\"��

����* ���� (object)��������һ���ֵ�Ե����򼯺ϣ�����Ϊ�գ�����ֵ�Ա�ʾ��������ԣ�������������ֵ�����Ե����ݡ������������� { ��ʼ���һ����� } ��������ֵ��֮���Զ��� , �ָ���һ����ֵ�Եļ���ֵ֮����ð�� : �ָ������������ַ�����ͬһ���������м�ֵ�Եļ���������������ͬ��ֵ�������ַ�����Ҳ��������һ���������磺{}��{"foo": "bar"}��{"Mon": "weekday", "Tue": "weekday", "Sun": "weekend"}��

���������ַ����ڲ���λ�ã�����λ�ö����Բ���һ�������ո�ʹ�� JSON �ĳ��ָ������ۣ�Ҳ������һЩ�ط����У�����Ӱ������ʾ���������ݡ����磬������������һ�� JSON ����Ҳ����д��������ʽ��

����{

����"Mon": "weekday",

����"Tue": "weekday",

����"Sun": "weekend"

����}

��������һ�� JSON ��ʽ���������ݣ��Լ����ɲ�ѯ����̷�����Щ��ѯ�Ľ����

 

����

 

��һ�������������� n �� m���ֱ��ʾ JSON ���ݵ������Ͳ�ѯ�ĸ�����

���������� n �У�����һ�� JSON ���ݣ���֤������һ���Ϸ��� JSON ����

���������� m �У�ÿ������һ����ѯ������Ҫ��ѯ����������Ҫ�󷵻ض�Ӧ���Ե����ݡ���Ҫ֧�ֶ���ѯ�������������֮����С���� . ���ӡ���֤��ѯ�ĸ�ʽ���ǺϷ��ġ�

 

���

 

�������������ÿһ����ѯ����˳�������ѯ�����ÿ�����ռһ�С�

���������ѯ�����һ���ַ���������� STRING <string>������ <string> ���ַ�����ֵ���м���һ���ո�ָ���

���������ѯ�����һ����������� OBJECT������Ҫ�����������ݡ�

���������ѯ��������ڣ������ NOTEXIST��

 

����

 

����

���

10 5

{

"firstName":   "John",

"lastName":   "Smith",

"address":   {

"streetAddress":   "2ndStreet",

"city":   "NewYork",

"state":   "NY"

},

"esc\\aped":   "\"hello\""

}

firstName

address

address.city

address.postal

esc\aped

STRING John

OBJECT

STRING   NewYork

NOTEXIST

STRING   "hello"

 

 

��ʾ

 

����n �� 100��ÿ�в����� 80 ���ַ���

����m �� 100��ÿ����ѯ�ĳ��Ȳ����� 80 ���ַ���

�����ַ����е��ַ���Ϊ ASCII �� 33-126 �Ŀɴ�ӡ�ַ���������ֿո������ַ��������ǿմ���

����������Ϊ�����ַ����������С���� .����ѯʱ���Ĵ�Сд���С�

����50%��������������Ķ���ֻ�� 1 ��ṹ��80%��������������Ķ���ṹ���������� 2 �㡣������˵��{"a": "b"} ��һ��ṹ�Ķ���{"a": {"b": "c"}} �Ƕ���ṹ�Ķ����Դ����ơ�
*/
#include <iostream>
#include <string>
#include <map>

using namespace std;

int n, m;
string s, str;
bool key;
map<string, string> json;

string handle(string str, string s)
{
    if (s.empty())
    {
        return str;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else if (s[i] == '{')
        {
            json[str] = "OBJECT";
            key = true;
        }
        else if (s[i] == '}')
        {
            int i;
            for (i = str.size() - 1; i >= 0; i--)
            {
                if (str[i] == '.')
                {
                    break;
                }
            }
            if (i < 0)
            {
                str = "";
            }
            else
            {
                str = str.substr(0, i);//str����ǰi�� 
            }
        }
        else if (s[i] == ':')
        {
            key = false;
        }
        else if (s[i] == ',')
        {
            key = true;
        }
        else if (s[i] == '"')
        {
            string temp;
            for (i = i + 1; i < s.size(); i++)
            {
                if (s[i] == '\\')
                {
                    i++;
                    temp += s[i];
                }
                else if (s[i] == '"')
                {
                    break;
                }
                else
                {
                    temp += s[i];
                }
            }
            if (key!=0)
            {
                if (str == "")
                {
                    str = temp;
                }
                else
                {
                    str += '.' + temp;
                }
            }
            else
            {
                json[str] = "STRING " + temp;
                int i;
                for (i = str.size() - 1; i >= 0; i--)
                {
                    if (str[i] == '.')
                    {
                        break;
                    }
                }
                if (i < 0)
                {
                    str = "";
                }
                else
                {
                    str = str.substr(0, i);
                }
            }
        }
    }
    return str;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin >> n >> m;
    cin.get();
    getchar();
    while (n--)
    {
        getline(cin, s);
        str = handle(str, s);
    }
    while (m--)
    {
        cin >> s;
        cout << (json[s] == "" ? "NOTEXIST" : json[s]) << endl;
    }
    return 0;
}
