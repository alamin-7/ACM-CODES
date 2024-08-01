public int countSeniors(String[] details) {
    int cnt = 0;

    for(String str:details){
        int n1 = str.charAt(11)-'0';
        int n2 = str.charAt(12)-'0';

        //age = n1*10+n2;

        if((n1*10+n2) > 60){
            cnt++;
        }
    }

    return cnt;
}
