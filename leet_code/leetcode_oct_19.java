public char findKthBit(int n, int k) {

    // timelimit exceeded

/* String s = "0"; 
        int i = 0;
        int indx_cnt = 0;
        while(n > 1){
            s = s+"1";
            indx_cnt++;

            for(int j = i; j >= 0; j--){
                if(s.charAt(j) == '0'){
                    s = s+"1";
                }
                else{
                    s = s+'0';
                }
                indx_cnt++;
            }
            i = indx_cnt;

            n--;
        }
        System.out.println(s);
        return s.charAt(k-1); */

        // accepted

        boolean inverted = false; 
        
        while (n > 1) {
    
            int length = (1 << n) - 1;
            int mid = length / 2 + 1;

            if (k == mid) {
                return inverted ? '0' : '1';
            }

            if (k > mid) {
                k = length - k + 1; 
                inverted = !inverted; 
            }

            n--;
        }

        return inverted ? '1' : '0';
    
    }
