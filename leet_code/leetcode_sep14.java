public int longestSubarray(int[] nums) {
    int max = 0;
    int cnt = 0;
    int max_cnt = 0;

    for(int i = 0; i < nums.length; i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }

    System.out.println(max);

    for(int i = 0; i < nums.length; i++){
        if(nums[i] == max){
            cnt++;
        }
        else{
            if(cnt > max_cnt){
                max_cnt = cnt;
            }
             cnt = 0;
        }
    }

    if(cnt > max_cnt) max_cnt = cnt;

    return max_cnt;
}
