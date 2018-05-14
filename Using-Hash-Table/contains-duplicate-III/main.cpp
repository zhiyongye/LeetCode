// 220. Contains Duplicate III
// https://leetcode.com/problems/contains-duplicate-iii/description/
// 时间复杂度: O(nlogk)
// 空间复杂度: O(k)

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long> record;
		for (int i=0; i<nums.size(); ++i) {
			if (record.lower_bound((long)nums[i]-(long)t) != record.end() &&
				*record.lower_bound((long)nums[i]-(long)t) <= (long)nums[i]+(long)t) {
				return true;
			}
			
			record.insert(nums[i]);
			
			// 保持record中最多有k个元素
            // 因为在下一次循环中会添加一个新元素,使得总共考虑k+1个元素
			if (record.size() == k+1) {
				record.erase(nums[i-k]);
			}
			
		}
		return false;
    }
};