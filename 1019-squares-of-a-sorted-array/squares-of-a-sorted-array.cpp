class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int start = 0;
        int end = nums.size() - 1;
        for (int i = end; i >= 0; --i) {
            if (abs(nums[start]) >= abs(nums[end])) {
                res[i] = nums[start] * nums[start];
                start++;
            } else {
                res[i] = nums[end] * nums[end];
                end--;
            }
        }
        return res;
    }
};