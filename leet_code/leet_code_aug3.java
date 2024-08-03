 public boolean canBeEqual(int[] target, int[] arr) {
    Arrays.sort(target);
    Arrays.sort(arr);

    for(int i = 0; i < target.length; i++){
        if(target[i] != arr[i]){
            return false;
        }
    }

    return true;
}


public boolean canBeEqual(int[] target, int[] arr) {

    int [] cnt1 = new int [1001];
    int [] cnt2 = new int [1001];

    for(int i: target){
        cnt1[i]++;
    }

    for(int i: arr){
        cnt2[i]++;
    }

    return Arrays.equals(cnt1, cnt2);
    
}
