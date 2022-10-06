//  时间:2022.10.06  22点47分
class Solution {
public:
    int longestContinuousSubstring(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            int j=i+1;
            while(j<s.size()&&s[j]==s[j-1]+1) j++;
            res=max(res,j-i);
            i=j-1;
        }
        return res;
    }
};