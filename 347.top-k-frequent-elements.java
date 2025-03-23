class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> frequencyMap = new HashMap<>();

        for (int num : nums) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }

        PriorityQueue<Pair> pq = new PriorityQueue<>(Comparator.comparingInt(pair -> ((Pair) pair).first).reversed()); // Explicit casting here

        for (Map.Entry<Integer, Integer> entry : frequencyMap.entrySet()) {
            pq.offer(new Pair(entry.getValue(), entry.getKey()));
        }

        int[] result = new int[k];
        int index = 0;

        while (k > 0) {
            result[index] = pq.poll().second;
            index++;
            k--;
        }

        return result;
    }

    static class Pair {
        public int first;
        public int second;

        public Pair(int first, int second) {
            this.first = first;
            this.second = second;
        }
    }
}