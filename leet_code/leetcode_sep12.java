public int countConsistentStrings(String allowed, String[] words) {
        
    int [] arr = new int [26];
    int cnt = 0, flag;

    for(int i = 0; i < allowed.length(); i++){
        arr[allowed.charAt(i) - 'a'] = 1;
    }

    for(String s: words){
        flag = 1;
        for(int i = 0; i < s.length(); i++){
            if(arr[s.charAt(i) - 'a'] == 0){
                flag = 0;
                break;
            }
        }

        if(flag == 1) cnt++;
    }

    return cnt;

}
