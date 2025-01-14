import java.util.HashMap;

public class leetcode_jan14 {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        HashMap<Integer, Integer> map = new HashMap<>();

        int[] ans = new int[A.length];
        int j, k = 0;

        for(int i = 0; i < A.length; i++){
            map.put(A[i], 0);
            j = 0;
            int cnt = 0;
            while(j <= k){
            if(map.containsKey(B[j])){
                cnt++;
            }
            j++;
           }
           k++;
           ans[i] = cnt;
        }

        return ans;
    }

    // acctepted. Time Complexity: O(n^2)

    int [] ans = new int [A.length];
       int [] cnt = new int [A.length+1];
       int find = 0;

       for(int i = 0; i < A.length; i++){
        if(++cnt[A[i]] == 2) find++;
        if(++cnt[B[i]] == 2) find++;

        ans[i] = find;
       }

       return ans;

       time Complexity: O(n)
}

