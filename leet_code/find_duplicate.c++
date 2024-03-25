        vector<int>v;
        int i;
        bool vis[100001]={false};

        for(i = 0; i < nums.size(); i++){
            if(vis[nums[i]] == true){
                v.push_back(nums[i]);
            }
            else{
                vis[nums[i]] = true;
            }
        }
        
        return v;