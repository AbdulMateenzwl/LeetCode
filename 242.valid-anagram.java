class Solution {
    // public boolean isAnagram(String s, String t) {
    // return sortString(s).equals(sortString(t));
    // }

    // public String sortString(String s){
    // char[] arr = s.toCharArray();
    // Arrays.sort(arr);
    // return new String(arr);
    // }

    public boolean isAnagram(String s, String t) {
        char[] freq = new char[26];

        for (char c : s.toCharArray()) {
            freq[c - 'a']++;
        }

        for (char c : t.toCharArray()) {
            freq[c - 'a']--;
        }

        for (int i : freq) {
            if (i != 0) {
                return false;
            }
        }

        return true;
    }
}