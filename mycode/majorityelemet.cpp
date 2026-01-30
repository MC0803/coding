#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &nums)
{
    if (nums.size() <= 1)
        return nums[0];
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
}
int main()
{
    int n;
    cout << "Enter length of array:";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums[i] = x;
    }
    cout << "Majority element is " << majorityElement(nums) << endl;
    return 0;
}