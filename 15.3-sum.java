class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);

        List<List<Integer>> ans = new ArrayList<>();
        int i = 0;

        while (i < nums.length) {

            int left = i + 1;
            int right = nums.length - 1;
            int currentVal = nums[i];
            while (left < right) {
                int lVal = nums[left];
                int rVal = nums[right];

                int sum = currentVal + lVal + rVal;

                if (sum == 0) {
                    ans.add(List.of(currentVal, lVal, rVal));
                    while (left < right && lVal == nums[left])
                        left++;
                    while (right > left && rVal == nums[right])
                        right--;
                } else if (sum > 0) {
                    right--;
                } else {
                    left++;
                }
            }

            while (i < nums.length && currentVal == nums[i]) {
                i++;
            }

        }

        return ans;

    }
}