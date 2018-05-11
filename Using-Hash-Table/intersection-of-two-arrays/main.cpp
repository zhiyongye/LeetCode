// 349. Intersection of Two Arrays
// https://leetcode.com/problems/intersection-of-two-arrays/description/
// 时间复杂度: O(nlogn)
// 空间复杂度: O(n)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> record(nums1.begin(), nums1.end());
        
        set<int> resultSet;
        for (vector<int>::iterator iter=nums2.begin(); iter!=nums2.end(); ++iter) {
            if (record.find(*iter) != record.end()) {
                resultSet.insert(*iter);
            }
        }
        
        return vector<int>(resultSet.begin(), resultSet.end());  
    }
};
