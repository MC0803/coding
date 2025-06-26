#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int longestSubsequence(string s, int k) {
        int count = 0;
        long long val = 0;
        int power = 0;

        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == '0') {
                count++;
            } else {
                if (power < 32 && (val + (1LL << power) <= k)) {
                    val += (1LL << power);
                    count++;
                }
            }
            power++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    string s = "1001010";
    int k = 5;
    cout << sol.longestSubsequence(s, k) << endl;  // Output: 5
    return 0;
}
