class Solution {
    public int removeDuplicates(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        int[] arr = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(nums[i])) {
                map.put(nums[i], map.get(nums[i]) + 1);
            } else {
                map.put(nums[i], 1);
            }
            arr[i] = nums[i];
        }
        int index = 0;
        for (int i = 0; i < nums.length; i++) {
            if (map.get(nums[i]) >= 2) {
                System.out.println(map.get(nums[i]));
                nums[index] = arr[i];
                nums[index + 1] = arr[i];
                index += 2;
                i += map.get(arr[i]) - 1;
            } else {
                nums[index] = arr[i];
                index++;
            }
        }
        return index;
    }
}