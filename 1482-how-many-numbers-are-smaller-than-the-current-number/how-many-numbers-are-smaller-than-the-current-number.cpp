class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end()); 
        map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) map.insert({sorted[i], i});
        for (int i = 0; i < nums.size(); ++i) sorted[i] = map[nums[i]];

        return sorted;
    }
};