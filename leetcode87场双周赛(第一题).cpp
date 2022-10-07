//  时间：2022.10.7  23点21分
class Solution {
public:
    int months[13]={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int get(string s){
        int res=0;
        int  m,d;
        sscanf(s.c_str(),"%d-%d",&m,&d);
        for(int i=1;i<m;i++) res+=months[i];
        return res+d;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
    int a=get(arriveAlice),b=get(leaveAlice);
    int c=get(arriveBob),d=get(leaveBob);
    return max(0,min(b,d)-max(a,c)+1);
    }
};