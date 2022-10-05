//  时间：2022.10.05  22点52分
class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> f(n),g(n);
        for(int i=0;i<n;i++){
            f[i]=1;
            if(i&&nums[i]<=nums[i-1])
                f[i]=f[i-1]+1;
        }
        for(int i=n-1;i>=0;i--){
            g[i]=1;
            if(i+1<n&&nums[i]<=nums[i+1])
                g[i]=g[i+1]+1;
        }
        vector<int> res;
        for(int i=k;i<n-k;i++)
            if(f[i-1]>=k && g[i+1]>=k)
                res.push_back(i);
        return res;
    }
};