// 75. Sort Colors
// https://leetcode.com/problems/sort-colors/description/


// 方法一：首先排序后再取出最大的第k个数
// 时间复杂度: O(nlogn)
// 空间复杂度: O(1)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        quickSort(nums,0,nums.size()-1);
        return nums[nums.size()-k];
    }
    
    void quickSort(vector<int>& nums, int left, int right) {
        
        if (left >= right) 
            return;
        
        int ele = nums[left];
        int p = left; //[left+1...p] <= ele
        for (int i=left+1; i<=right; ++i) {
            if (nums[i] < ele) {
                swap(nums[++p], nums[i]);
            }
        }
        swap(nums[p], nums[left]);
        
        quickSort(nums,left, p-1);
        quickSort(nums, p+1, right);
        
    }
};

// 方法二：使用快排的思想
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        return __findKthLargest(nums,0,nums.size()-1,nums.size()-k);
    }
    
    int __findKthLargest(vector<int>& nums, int left, int right,int k) {
        
        int ele = nums[left];
        int p = left; //[left+1...p] <= ele
        for (int i=left+1; i<=right; ++i) {
            if (nums[i] < ele) {
                swap(nums[++p], nums[i]);
            }
        }
        swap(nums[p], nums[left]);
        
       if (p == k) {
		   return nums[p];
	   }else if (p > k) {
		   return __findKthLargest(nums, left, p-1, k);
	   }else {
		   return __findKthLargest(nums, p+1, right, k);
	   }	   
        
    }
};

