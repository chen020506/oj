// 时间：2022.10.02  21点33分
class Solution {
public:
    int commonFactors(int a, int b) {
        int res=0;
        for(int i=1;i<=a;i++)
            if(a%i==0&&b%i==0)  res++;
    return res;
    }

};