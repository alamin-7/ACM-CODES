public class leetcode_jan06 {
    public int[] minOperations(String boxes) {
        int [] ones = new int [boxes.length()];
        int [] ans = new int [boxes.length()];

        int j = 0;
        for(int i = 0; i < boxes.length(); i++){
            if(boxes.charAt(i) == '1'){
                ones[j++] = i;
            }
        }

        for(int i = 0; i < boxes.length(); i++){
            int sum = 0;
            for(int k = 0; k < j; k++){
                if(i == ones[k]){
                    continue;
                }
                sum += (Math.abs(i - ones[k]));
              
            }

            ans[i] = sum;
        }

        return ans;
    }
}
