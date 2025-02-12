class Solution {
    public int maximumSum(int[] nums) {
        Map<Integer, List<Integer>> map = new HashMap<>();
        int maxSum = -1;

        for(int i = 0; i < nums.length; i++){
            int num = nums[i];
            int sum = 0;
            while(num > 0){
                sum += (num % 10);
                num /= 10;
            }

            map.computeIfAbsent(sum,k -> new ArrayList<>()).add(nums[i]);
        }

        map.forEach((key, value) -> System.out.println(key + " -> " + value));

        int max = map.entrySet().stream()
            .filter(entry -> entry.getValue().size() >= 2)
            .mapToInt(entry -> entry.getValue().stream()
            .sorted(Comparator.reverseOrder())
            .limit(2)
            .mapToInt(Integer::intValue)
            .sum())
            .max()
            .orElse(-1);

            return max;
    }
}

// The below one is optimized solution. Time complexity O(n). 

class Solution {
    public int maximumSum(int[] nums) {
       int [] digitSum = new int [82];
       int maxSum = -1;
       boolean f = false;
       for(int i = 0; i < nums.length; i++){
        int num = nums[i];
        int sum = 0;

        while(num > 0){
            sum += (num % 10);
            num /= 10;
        }
        if(digitSum[sum] == 0){
        digitSum[sum] = nums[i];
        }
        else{
            f = true;

            if(maxSum < digitSum[sum] + nums[i]){
                maxSum = digitSum[sum] + nums[i];
            }

            if(digitSum[sum] < nums[i]){
                digitSum[sum] = nums[i];
            }
        }

       }
       if(!f) return -1;
       return maxSum;
    }
}