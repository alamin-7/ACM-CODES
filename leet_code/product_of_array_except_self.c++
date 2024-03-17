        vector<int>v;
        int p = 1;
        int i, zero_cnt = 0;

        for( i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zero_cnt++;
                continue;
            }
            p*=nums[i];
            cout<<p<<endl;
        }

        cout<<p<<endl;

        if(zero_cnt > 1){
            for(i = 0; i < nums.size(); i++){
                v.push_back(0);
            }
        }
        else{
            for(i = 0; i < nums.size(); i++){
                if(nums[i] == 0) v.push_back(p);
                else if(zero_cnt) v.push_back(0);
                else  v.push_back(p/nums[i]);
            }
        }

        return v;
    