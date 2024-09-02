// time limit exceeded

public int chalkReplacer(int[] chalk, int k) {
    int i = 0;

    while(k > 0){
        if(k - chalk[i] > 0){
            k -= chalk[i];

            if(i < chalk.length-1){
                if(k - chalk[i+1] < 0){
                    i = i+1;
                    break;
                }
                else{
                    i++;
                }
            }
            else if(i == chalk.length-1){
                if(k - chalk[0] < 0){
                    i = 0;
                    break;
                }
                else{
                    i = 0;
                }
            }
        }
        else{
            if(k - chalk[i] == 0){
                if(i == chalk.length-1){
                    i = 0;
                }
                else{
                    i++;
                }
                break;
            }
            else{
                break;
            }
        }
    }
    return i;
}

// accepted

public int chalkReplacer(int[] chalk, int k) {
    long sum = 0;
    int mod;
    int indx = 0;
    
    for(int i = 0; i < chalk.length; i++){
        sum += chalk[i];
    }

    k = (int)(k % sum);

    if(k == 0){
        return 0;
    }

    System.out.println(k);

    for(int i = 0; i < chalk.length; i++){
        if(k - chalk[i] == 0){
            indx = i+1;
            break;
        }
        else if(k - chalk[i] < 0){
            indx = i;
            break;
        }
        else{
            k -= chalk[i];
        }

        System.out.println(k);
    }

    return indx;

}



