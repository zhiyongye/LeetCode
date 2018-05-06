// LeetCode 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/description/


// ������ ��������k���ڱ�������з���Ԫ�ص�λ�ã�����nums��, [0...k)��Ԫ��Ϊ��0Ԫ��
//        ����ÿ������Ԫ�ؽ���Ԫ���ƶ���k��ָ��λ�� 
// ʱ�临�Ӷ�: O(n)
// �ռ临�Ӷ�: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;     // [0...k)��Ԫ�ؾ�Ϊ��0Ԫ��
        for (int i=0; i<nums.size(); ++i) {
            if ( nums[i] != 0) {
                nums[j] = nums[i];
                k++;
            }
        }
        
        // ��numsʣ���λ�÷���Ϊ0
        for (int i=k; i<nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};


// �Ż�һ�� ����k����i������¿���ʡ��������Լ���ֵ�Ĳ��� 
// ʱ�临�Ӷ�: O(n)
// �ռ临�Ӷ�: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;     // [0...k)��Ԫ�ؾ�Ϊ��0Ԫ��
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
        
        // ��numsʣ���λ�÷���Ϊ0
        for (int i=k; i<nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};


// �Ż����� �����ý�������Ԫ�غ�k����ָ���0Ԫ����ȥ������ʣ��λ�õ�ֵ0���� 
// ʱ�临�Ӷ�: O(n)
// �ռ临�Ӷ�: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;     // [0...k)��Ԫ�ؾ�Ϊ��0Ԫ��
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



