//  时间：2022.10.05 22点35分
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res=0,val=0;
        for(auto x:nums) val=max(val,x);//找出这个数组中的最大值
        //由于与运算是越与越小，所以只需要找到数组元素最大值，然后找出数组中最大元素的连续最长个数
        for(int i=0,j=0;i<nums.size();i++)
        {
            if(nums[i]==val){
                j++;
                res=max(res,j);
            }
            else
                j=0;
        }
        return res;
    }
};