class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, len = INT_MAX, sum = 0;
        for (int right = 0; right < nums.size(); ++right) {
            sum += nums[right];
            while (sum >= target) {
                len = min(len, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        if (len == INT_MAX) return 0;
        return len;
    }
};