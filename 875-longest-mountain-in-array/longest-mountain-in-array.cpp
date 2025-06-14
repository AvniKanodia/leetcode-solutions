class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if (arr.size() < 3) return 0;
        int res = 0;

        for (int i = 1; i < arr.size() - 1; ++i) {
            if (arr[i] <= arr[i-1] || arr[i] <= arr[i+1]) continue;
            int left = i - 1;
            int right = i + 1;
            while (left >= 0 && arr[left] < arr[left+1]) left--;
            while (right < arr.size() && arr[right] < arr[right-1]) right++;
            res = max(res, right - left - 1);
        }
        return res;
    }
};