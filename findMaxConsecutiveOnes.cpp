/*
Given a binary array, find the maximum number of consecutive 1s in this array.
Input: [1,1,0,1,1,1]
Output: 3
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max_cnt = 0;
        for (bool i: nums){
            i? (count++):(count = 0);
            max_cnt = (max_cnt> count)? max_cnt:count;
            }
        return max_cnt;
    }
};
