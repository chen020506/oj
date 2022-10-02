// 时间：2022.10.02  22点25分
class Solution {
public:
    int minimizeXor(int a, int b) {
        int cnt=0;//先统计一下num2中的1的数
        while(b) cnt+=b&1,b>>=1;
        int res=0;
        for(int i=29;i>=0 && cnt>0;i--)
            if(a>>i&1){//如果a的这一位是1
                res-=1<<i;
                cnt--;
            }
            for(int i=0;i<30&&cnt>0;i++)
                if(!(a>>i&1)){//如果a的这一位是0
                res+=1<<i;
                cnt--;
                }
        return (a+res)^a;
    }
};