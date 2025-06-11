class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> small;
        for (int i = 0; i < nums.size(); ++i) {
            int count = 0;
            for (int j = 0; j < nums.size(); ++j) {
                if (i==j) continue;
                if (nums[j] < nums[i]) count++;;
            }
            small.push_back(count);
        }
        return small;
    }
};