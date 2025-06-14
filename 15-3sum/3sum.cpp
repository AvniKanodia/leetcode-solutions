class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() < 3) return {};
        if ( nums[0] > 0) return {};

        map<int, int> seen;
        vector<vector<int>> res;
        for(int i = 0 ; i < nums.size() ; ++i){   
            seen[nums[i]] = i;
        }

        for (int i = 0; i < nums.size()-2; ++i) {
            if (nums[i] > 0) break;

            for (int j = i+1; j < nums.size()-1; ++j) {
                int target = -1 * (nums[i] + nums[j]);
                if (seen.count(target) && seen[target] > j) {
                    res.push_back({nums[i], nums[j], target});
                }
                j = seen[nums[j]];
            }
            i = seen[nums[i]];
        }
        return res;
    }
};