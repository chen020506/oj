//时间;2022.10.02  21点49分
class Solution {
public:
    int maxSum(vector<vector<int>>& g) {
        int n=g.size(),m=g[0].size();//找出这个二维数组的行数和列数
        int res=0;
        //用双层循环来枚举沙漏的中心点，注意此时的i和j是从1开始的，这样可以避免边界
        for(int i=1;i<n-1;i++)
            for(int j=1;j<m-1;j++){
                int s=g[i][j];//用s来更新每一次沙漏中心点为（i,j）的情况下的沙漏总和树
                for(int k=j-1;k<=j+1;k++)
                    s+=g[i-1][k]+g[i+1][k];//中心点加上上面和下面三个数
                res=max(res,s);
            }
            return res;
    }
};