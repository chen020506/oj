//  时间：2022.10.05  22点06分
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string> > q;
        for(int i=0;i<names.size();i++) 
            q.push_back({-heights[i],names[i]});
        sort(q.begin(),q.end());
        vector<string> res;//答案数组
        for(auto p:q)
            res.push_back(p.second);
        return  res;
    }
};