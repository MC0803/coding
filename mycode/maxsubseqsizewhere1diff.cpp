#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// To find the length of the longest harmonious subsequence
/*Approach: 
           1. Sort the array
           2.use two pointers left and right 
           3. increment with right as to avoid re checking same sequences
           3. if the difference between nums[right] and nums[left] is more than 1 then increment left
           4.only if difference is 1 then we can compute the length of subsequence
              this is so that all same ele{1,1,1,1,1} kind of subsequences are not counted
           5. return the max length found */

class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0, result = 0;
        
        for (int right = 0; right < nums.size(); ++right) {
            while (nums[right] - nums[left] > 1) {
                left++;
            }
            if (nums[right] - nums[left] == 1) {
                result = max(result, right - left + 1);
            }
        }
        return result;
    }
};