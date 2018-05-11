// 350. Intersection of Two Arrays II
// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
// 时间复杂度: O(nlogn)
// 空间复杂度: O(n)
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> record;
		
		for (int i=0; i<nums1.size(); ++i) {
			record[nums1[i]] ++;
		}
        
        vector<int> result;
        for (vector<int>::iterator iter=nums2.begin(); iter!=nums2.end(); ++iter) {
            if (record[*iter] > 0) {
                result.push_back(*iter);
				record[*iter]--;
            }
        }
        
        return result;  
    }
};
