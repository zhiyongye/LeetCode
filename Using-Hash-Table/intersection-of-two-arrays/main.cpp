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

// 用哈希表
// 时间复杂度: O(len(nums1)+len(nums2))
// 空间复杂度: O(len(nums1))
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> record(nums1.begin(), nums1.end());

        unordered_set<int> resultSet;
        for(int i = 0; i < nums2.size(); i ++ )
            if(record.find(nums2[i]) != record.end())
                resultSet.insert(nums2[i]);

        return vector<int>(resultSet.begin(), resultSet.end());
    }
};
