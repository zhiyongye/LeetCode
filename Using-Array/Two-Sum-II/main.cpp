// 167. Two Sum II - Input array is sorted
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
//
// 对撞指针
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        
        while (i < j) {
            if (numbers[i]+numbers[j] == target ) {
                int res[2] = {i+1, j+1};
                return vector<int>(res, res+2);
            }else if (numbers[i]+numbers[j] < target) {
                i++;
            }else {
                j--;
            }
        }
    }
};
