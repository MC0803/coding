#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* to find the total number of subsequences with sum less than or equal to a target sum
appoach 
      1. sort nums
      2. for every subsequence[i,j] its elements inside can be upto 2^(j-i) so every valid subsequence must be checked and added
      3. minimum = left and we start with right and if sum > INT_MAX we move right--
      4. compute sum left right till left=right */
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        vector<int> power(n, 1);
        
        // Precompute powers of 2 up to n
        for (int i = 1; i < n; ++i)
            power[i] = (power[i - 1] * 2) % MOD;

        sort(nums.begin(), nums.end());
        int left = 0, right = n - 1;
        int result = 0;

        while (left <= right) {
            if (nums[left] + nums[right] <= target) {
                result = (result + power[right - left]) % MOD;
                left++;
            } else {
                right--;
            }

        }
        return result;
    }
};