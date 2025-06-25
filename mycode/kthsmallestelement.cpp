#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



long long countLessEqual(vector<int>& nums1, vector<int>& nums2, long long x) {
    int n = nums1.size(), m = nums2.size();
    long long count = 0;

    for (int i = 0; i < n; ++i) {
        int a = nums1[i];

        if (a > 0) {
            // Find max index j where a * nums2[j] <= x
            int l = 0, r = m;
            while (l < r) {
                int mid = (l + r) / 2;
                if ((long long)a * nums2[mid] <= x)
                    l = mid + 1;
                else
                    r = mid;
            }
            count += l;
        }
        else if (a < 0) {
            // Find min index j where a * nums2[j] <= x
            int l = 0, r = m;
            while (l < r) {
                int mid = (l + r) / 2;
                if ((long long)a * nums2[mid] <= x)
                    r = mid;
                else
                    l = mid + 1;
            }
            count += m - l;
        }
        else { // a == 0
            if (x >= 0)
                count += m;
        }
    }

    return count;
}

long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    long long low = -1e10, high = 1e10, ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (countLessEqual(nums1, nums2, mid) < k)
            low = mid + 1;
        else {
            ans = mid;
            high = mid - 1;
        }
    }

    return ans;
}

int main(){
    vector<int> nums1;
    vector<int> nums2;
    int k,s;
    cout<<"Enter size of nums1";
    cin>>s;
    for(int i=0;i<s;i++) cin>>nums1[i];
    cout<<"Enter size of nums2";
    cin>>s;
    for(int i=0;i<s;i++) cin>>nums2[i];
    cout<<" Enter value of k";
    cin>>k;

    kthSmallestProduct(nums1,nums2,k);
}
