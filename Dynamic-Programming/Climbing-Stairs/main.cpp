// 70. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/description/
// 动态规划
// 时间复杂度: O(n)
// 空间复杂度: O(n)

class Solution {
public:
    int climbStairs(int n) {
        
        vector<int> mem(n+1, 0);
        
        mem[1] = 1;
        mem[2] = 2;
        for (int i=3; i<=n; ++i) {
            mem[i] = mem[i-2] + mem[i-1];
        }
        
        return mem[n];
    }
};
