import java.util.PriorityQueue;
import java.util.Queue;

public abstract class leetcode_feb13 {
    class Solution {
    public int minOperations(int[] nums, int k) {
        Queue<Long> q = new PriorityQueue<>();

        for(int i = 0; i < nums.length; i++){
            q.add((long)nums[i]);
        }

        int cnt = 0;
        while(q.peek() < k && q.size() >= 2){
            long a = q.poll();
            long b = q.poll();

            q.add(a*2+b);
            cnt++;
        }

        return cnt;
    }
}

below one optimized

class Solution {
    public int minOperations(int[] nums, int k) {
        Queue<Integer> q = new PriorityQueue<>();

        for(int i = 0; i < nums.length; i++){
            if(nums[i] < k)q.add(nums[i]);
        }

        int cnt = 0;
        while(!q.isEmpty()){
            int a = q.poll();
            cnt++;

            if(q.isEmpty()) break;
            int b = q.poll();

            long c = 2L * a+b;
            if(c < k) {q.add((int)c);}
        }

        return cnt;
    }
}
