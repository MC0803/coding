#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/* To find the maximum sum of a subarray of size k */
/* approach--
             1. arrange all elements with respective indices
             2. sort in desc order 
             3. take top elements
             4. put in order of their indices in vector
             5. return  vector                                           */

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> withIndex;
        
        // Store value with original index
        for (int i = 0; i < nums.size(); ++i) {
            withIndex.push_back({nums[i], i});
        }
        
        // Sort by value descending
        sort(withIndex.begin(), withIndex.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        // Pick top k elements
        withIndex.resize(k);

        // Sort by original index to preserve order
        sort(withIndex.begin(), withIndex.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });

        // Extract the result
        vector<int> result;
        for (auto &p : withIndex) {
            result.push_back(p.first);
        }
        
        return result;
    }
}; 