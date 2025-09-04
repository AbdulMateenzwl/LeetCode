class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        PriorityQueue<Pair> maxHeap = new PriorityQueue<>(Collections.reverseOrder());

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            maxHeap.add(new Pair(entry.getValue(), entry.getKey()));
        }

        int[] ans = new int[k];
        while (k > 0) {
            ans[k - 1] = maxHeap.poll().val();
            k--;
        }

        return ans;
    }
}

record Pair(int key, int val) implements Comparable<Pair> {
    @Override
    public int compareTo(Pair other) {
        return Integer.compare(this.key, other.key);
    }
}