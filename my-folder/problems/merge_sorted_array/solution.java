class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] copy = new int[m];
        int index = 0;
        int two = 0;
        for (int i = 0; i < m + n; i++) {
            if (i<m) {
                copy[i] = nums1[i];
            }
            if (index >= m) {
                nums1[i] = nums2[two++];
                continue;
            }
            if (two >= n) {
                nums1[i] = copy[index++];
                continue;
            }
            if (copy[index] <= nums2[two]) {
                nums1[i] = copy[index++];
                continue;
            }
            if (copy[index] > nums2[two]) {
                nums1[i] = nums2[two++];
                continue;
            }
        }
    }
}