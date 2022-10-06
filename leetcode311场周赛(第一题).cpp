// 时间：2022.10.06  22点30分
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2) return 2*n;
        else return n;
    }
};