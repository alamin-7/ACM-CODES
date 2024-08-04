public int rangeSum(int[] nums, int n, int left, int right) {
        
    int [] generatedArray = new int[n*(n+1)/2];
         int sum = 0, indx = 0;
 
         for(int i = 0; i < n; i++){
             sum = nums[i];
             for(int j = i+1; j < n; j++){
                 generatedArray[indx++] = sum;
                 sum+= nums[j];
             }
             generatedArray[indx++] = sum;
         }
         Arrays.sort(generatedArray);
         sum = 0;
 
        int mod = (int) 1e9 + 7;
 
         for(int i = left-1; i < right; i++ ){
             sum = (sum + generatedArray[i]) % mod;
         }
 
         return sum;
 
     }
