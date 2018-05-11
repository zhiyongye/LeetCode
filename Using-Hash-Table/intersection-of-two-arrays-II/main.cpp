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

// 用哈希表
// 时间复杂度: O(len(nums1)+len(nums2))
// 空间复杂度: O(len(nums1))
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> record;
        for( int i = 0 ; i < nums1.size() ; i ++ )
            record[nums1[i]] += 1;

        vector<int> resultVector;
        for(int i = 0; i < nums2.size(); i ++)
            if(record[ nums2[i] ] > 0){
                resultVector.push_back(nums2[i]);
                record[nums2[i]] --;
            }

        return resultVector;
    }
};
