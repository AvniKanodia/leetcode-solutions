class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> set(nums.begin(), nums.end());
        vector<int> res;

        for (int i = 1; i <= nums.size(); ++i) {
            if (!set.contains(i)) res.push_back(i);
        }
        return res;
    }
};