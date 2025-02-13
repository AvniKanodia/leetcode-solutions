class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double sum = 0;
        double max_avg = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        max_avg = sum / k;
        double avg = 0;
        for (int i = k; i < nums.length; i++) {
            sum += nums[i] - nums[i - k];
            avg = sum/k;
            if (avg > max_avg) {
                max_avg = avg;
            }
        }
        return max_avg;
    }
}