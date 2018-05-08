// 209. Minimum Size Subarray Sum
// https://leetcode.com/problems/minimum-size-subarray-sum/description/
//
// 滑动窗口的思路
// 时间复杂度: O(n)
// 空间复杂度: O(1)

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {

        assert(s > 0);

        int l = 0 , r = -1; // nums[l...r]为滑动窗口
        int sum = 0;
        int res = nums.size() + 1;

        while(l < nums.size()){   // 窗口的左边界在数组范围内,则循环继续

            if(r + 1 < nums.size() && sum < s)
                sum += nums[++r];
            else // r已经到头 或者 sum >= s
                sum -= nums[l++];

            if(sum >= s)
                res = min(res, r - l + 1);
        }

        if(res == nums.size() + 1)
            return 0;
        return res;
    }
};