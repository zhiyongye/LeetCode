// 75. Sort Colors
// https://leetcode.com/problems/sort-colors/description/


// 方法一：使用计数排序的两趟扫描算法。
// 首先，迭代计算出0、1 和 2 元素的个数，然后按照0、1、2的排序，重写当前数组。对整个数组遍历了两遍
// 时间复杂度: O(n)
// 空间复杂度: O(k), k为元素的取值范围
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == 0)
                zeroCount++;
            else if (nums[i] == 1) {
                oneCount++;
            }else {
                twoCount++;
            }
        }
        
        for (int i=0; i<zeroCount; ++i) {
            nums[i] = 0;
        }
        
        for (int i=zeroCount; i<(zeroCount+oneCount); ++i) {
            nums[i] = 1;
        }
        
        for (int i=zeroCount+oneCount; i<nums.size(); ++i) {
            nums[i] = 2;
        }
        
    }
};


// 方法二：使用三路快排的思路
// 对整个数组只遍历了一遍
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
		
		int left = 0;
		int right = nums.size();
		
        int zero = -1;   //[left...zero] = 0
		int two = right; //[two...right] = 2
		int one = left;  //(zero...one) = 1
		while (one < two) {
			if (nums[one] == 0) {
				swap(nums[++zero],nums[one++]);
			}else if (nums[one] == 1) {
				one++;
			}else {
				swap(nums[--two],nums[one]);
			}  
		}
    }
};