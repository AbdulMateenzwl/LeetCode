class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> sett = new HashSet<>();

        for (int num : nums) {
            if (sett.contains(num)) {
                return true;
            }
            sett.add(num);
        }
        return false;
    }
}