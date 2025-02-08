public class leetcode_8Feb {
    Map<Integer, Integer> map;
    Map<Integer, PriorityQueue<Integer>> ans;

    
    public NumberContainers() {
        this.map = new HashMap<>();
        this.ans = new HashMap<>();
    }
    
    public void change(int index, int number) {
        if(map.containsKey(index)){
            int prevNum = map.get(index);
            if(prevNum == number) return;
            ans.get(prevNum).remove(index);
        }
        map.put(index, number);
        ans.computeIfAbsent(number, k -> new PriorityQueue<>()).offer(index);
    }
    
    public int find(int number) {
        PriorityQueue<Integer> pq = ans.getOrDefault(number, new PriorityQueue<>());
        return pq.isEmpty() ? -1 : pq.peek();
    }
}
