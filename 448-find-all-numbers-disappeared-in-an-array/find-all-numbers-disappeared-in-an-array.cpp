class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> set;
        vector<int> res;
        for (int num : nums) set.insert(num);

        for (int i = 1; i <= nums.size(); ++i) {
            if (!set.contains(i)) res.push_back(i);
        }
        return res;
    }
};