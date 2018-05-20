// 70. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/description/
// ��̬�滮
// ʱ�临�Ӷ�: O(n)
// �ռ临�Ӷ�: O(n)

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
