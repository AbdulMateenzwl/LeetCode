class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        HashMap<String, List<String>> map = new HashMap<>();

        for (String str : strs) {

            char[] sArray = str.toCharArray();
            Arrays.sort(sArray);
            String sorted = new String(sArray);

            if (!map.containsKey(sorted)) {
                map.put(sorted, new ArrayList<>());
            }

            map.get(sorted).add(str);
        }

        return new ArrayList<>(map.values());
    }
}