class Solution {
    public int[] productExceptSelf(int[] nums) {
        int product = 1;
        boolean zero = false;

        for (int num : nums) {
            if (num == 0) {
                if (zero == true) {
                    return new int[nums.length];
                }
                zero = true;
            } else {
                product *= num;
            }
        }

        int[] ans = new int[nums.length];

        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];

            if (num == 0) {
                ans[i] = product;
            } else if (zero) {
                ans[i] = 0;
            } else {
                ans[i] = product / num;
            }
        }

        return ans;
    }
}