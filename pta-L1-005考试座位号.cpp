// 时间：2022.04.03 00点41分
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int m,n;
class Mes{
    public:
    Mes(string id,int testid,int gameid):m_id(id),m_testid(testid),
    m_gameid(gameid){};
    string m_id;//准考证号
    int m_testid;//试机座位号
    int m_gameid;//考试座位号
};
int main (){
    cin>>n;
    vector<Mes>mv;
    for(int i=1;i<=n;i++)
    {
        string str;
        int testid,gameid;
        cin>>str>>testid>>gameid;
         Mes ms(str,testid,gameid);
        mv.push_back(ms);
    }
    cin>>m;
    int ret;
    while(m--){
        cin>>ret;
        for(int i=0;i<n;i++)
        {
        if(ret==mv[i].m_testid)
            cout<<mv[i].m_id<<" "<<mv[i].m_gameid<<endl;
        }
    }
    return 0;
}