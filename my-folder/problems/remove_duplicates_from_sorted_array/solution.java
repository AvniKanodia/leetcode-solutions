class Solution {
    public int removeDuplicates(int[] nums) {
        int[] temp = nums;
        Map<Integer, Integer> map = new HashMap<>();
        int k = 0;
        for (int i = 0; i < temp.length; i++) {
            if(!map.containsKey(temp[i])) {
                nums[k] = temp[i];
                map.put(temp[i], i);
                k++;
            }
        }
        return k;
    }
}