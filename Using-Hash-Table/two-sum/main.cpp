// 1. Two Sum
// https://leetcode.com/problems/two-sum/description/
// 时间复杂度：O(n)
// 空间复杂度：O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> record;
		
		for (int i=0; i<nums.size(); ++i) {
			int ele = target - nums[i];
			if (record.find(ele) != record.end()) {
				int res[]={record[ele], i};
				return vector<int>(res,res+2);
			}
			
			record[nums[i]] = i;
		}
    }
};