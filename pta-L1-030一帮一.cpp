// 时间：2022.04.12 23点14分
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Person
{
  public:
    Person(int sex,string name):m_sex(sex),m_name(name){};
    int m_sex;
    string m_name;
    bool ret=false;//用来标记这个人是否已经输出过
};

int n;
vector<Person>mv;
int main ()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int sex;
        string name;
        cin>>sex>>name;
        mv.push_back(Person(sex,name));
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if((mv[i].m_sex + mv[j].m_sex==1)&&(mv[j].ret==false))//两个人性别和为1，并且没有被输出过
            {
                cout<<mv[i].m_name<<" "<<mv[j].m_name<<endl;
                mv[j].ret=true;//输出一次之后需要将这个标志位改为true
                break;//注意此时需要加break，只要找到最靠后的可以匹配的一个人就可以了，不加break，会将前面的人都输出一次
            }
        }
    }
    return 0;
}