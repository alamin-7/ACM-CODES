  public boolean canConstruct(String s, int k) {
    if(s.length() < k) return false;

    int [] a = new int[26];

    for(int i = 0; i < s.length(); i++){
        a[s.charAt(i) - 'a']++;
    }

    int cnt = 0;

    for(int i = 0; i < 26; i++){
        if(a[i] % 2 == 1){
            cnt++;
        }
    }

    if(cnt <= k) return true;
    return false;
} 

