class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (!map.contains(sorted[i])) map[sorted[i]] = i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            sorted[i] = map[nums[i]];
        }
        return sorted;
    }
};