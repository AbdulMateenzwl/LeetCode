class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();

        String newS = "";

        for(int i = 0;i< s.length(); i++){
            Character c = s.charAt(i);
            if(Character.isLetterOrDigit(c)){
                newS += c;
            }
        }

        StringBuilder reversed = new StringBuilder(newS).reverse();
        String reversedString = reversed.toString();
        return newS.equals(reversedString);
    }
}

// Fast Method
class Solution {
    public boolean isPalindrome(String s) {
        int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            while (l < r && !Character.isLetterOrDigit(s.charAt(l))) {
                l++;
            }
            while (l < r && !Character.isLetterOrDigit(s.charAt(r))) {
                r--;
            }

            if (Character.toLowerCase(s.charAt(l)) != Character.toLowerCase(s.charAt(r))) {
                return false;
            }

            l++;
            r--;
        }

        return true;
    }
}