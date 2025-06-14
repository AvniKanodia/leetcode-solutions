class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        int min = INT_MAX;
        for (int i = 1; i < arr.size(); ++i) {
            int dif = arr[i] - arr[i-1];
            if (dif == min) {
                res.push_back({arr[i-1], arr[i]});
            }
            if (dif < min) {
                min = dif;
                res.clear();
                res.push_back({arr[i-1], arr[i]});
            } 
        }
        return res;
    }
};