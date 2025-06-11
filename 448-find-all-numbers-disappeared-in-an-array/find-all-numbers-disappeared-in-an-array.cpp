class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;
        set<int> num;

        for (int x : nums) num.insert(x);

        for (int i = 0; i < nums.size(); ++i) {
            if (!num.contains(i+1)) missing.push_back(i+1);
        }
        return missing;
    }
};