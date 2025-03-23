class Solution {
    public int[] productExceptSelf(int[] nums) {
        int product = 1;
        boolean zero = false;

        for(int i = 0;i< nums.length;i++){
            if(nums[i] == 0){
                if(zero == false){
                    zero =true;
                }
                else{
                    return new int[nums.length];
                }
            }
            else{
                product *= nums[i];
            }
        }

        int[] res = new int[nums.length];

        for(int i = 0;i< nums.length;i++){
            if(zero == true){
                if(nums[i] == 0){
                    res[i] = product;
                }
            }
            else{
                res[i] = product / nums[i];
            }
        }

        return res;
    }
}