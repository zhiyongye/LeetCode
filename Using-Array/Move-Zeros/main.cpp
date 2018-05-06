// LeetCode 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/description/


// 方法： 定义索引k用于标记数组中非零元素的位置，即在nums中, [0...k)的元素为非0元素
//        遇到每个非零元素将该元素移动到k所指的位置 
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;     // [0...k)的元素均为非0元素
        for (int i=0; i<nums.size(); ++i) {
            if ( nums[i] != 0) {
                nums[j] = nums[i];
                k++;
            }
        }
        
        // 将nums剩余的位置放置为0
        for (int i=k; i<nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};


// 优化一： 对于k等于i的情况下可以省略自身给自己赋值的操作 
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;     // [0...k)的元素均为非0元素
        for (int i=0; i<nums.size(); ++i) {
            if ( nums[i] != 0) {
            	if (i != k) {
            		nums[k] = nums[i];
               		k++;
				} else {
					k++;
				}        
            }
        }
        
        // 将nums剩余的位置放置为0
        for (int i=k; i<nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};


// 优化二： 可以用交换非零元素和k索引指向的0元素免去对数组剩余位置的值0操作 
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;     // [0...k)的元素均为非0元素
        for (int i=0; i<nums.size(); ++i) {
            if ( nums[i] != 0) {
            	if (i != k) {
            		swap( nums[k], nums[i]);
               		k++;
				} else {
					k++;
				}        
            }
        }  
    }
};



