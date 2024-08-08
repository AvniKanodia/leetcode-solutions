class Solution {
    public int findClosestNumber(int[] nums) {
        int distance = Math.abs(nums[0]);
        int temp;
        int index = 0;
        for (int i = 1; i < nums.length; i++) {
            temp = Math.abs(nums[i]);
            if (temp < distance) {
                distance = temp;
                index = i;
            }
            if (temp == distance) {
                if (nums[index] < nums[i]) {
                    distance = temp;
                    index = i;
                }
            }
        }
        return nums[index];
    }
}