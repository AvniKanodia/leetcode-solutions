class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int one = 0;
        int two = 0;
        vector<int> sorted; 
        for (int i = 0; i < m+n; i++) {
            if (one >= m) {
                sorted.push_back(nums2[two]);
                two++;
                continue;
            }
            if (two >= n) {
                sorted.push_back(nums1[one]);
                one++;
                continue;
            }
            if (nums1[one] >= nums2[two]) {
                sorted.push_back(nums2[two]);
                two++;
            } else {
                sorted.push_back(nums1[one]);
                one++;
            }
        }
        nums1 = sorted;
    }
};