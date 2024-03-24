 bool a[100001]={false};
        int num;

        for(int i = 0; i < nums.size(); i++){
            if(a[nums[i]] == true){
                num = nums[i];
                break;
            }
            else{
                a[nums[i]] = true;
            }
        }
        return num;


  // another solution but time and memory complexity is high

          sort(nums.begin(), nums.end());

        int i;

        for(i = 0; i < nums.size()-1; i++){

            if(nums[i] == nums[i+1]){
                break;
            }
        }

        return nums[i];      