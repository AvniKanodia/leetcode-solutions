class Solution {
    public int removeElement(int[] nums, int val) {
        int[] temp = nums;
        int k = 0;
        for (int i = 0; i < temp.length; i++) {
            if (temp[i] != val) {
                nums[k] = temp[i];
                k++;
            }
        }
        return k;
    }
}