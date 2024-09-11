public int minBitFlips(int start, int goal) {
    int flip_cnt = 0;

    int xor = start ^ goal;

    System.out.println(xor);

    while(xor != 0){
        flip_cnt += xor & 1;
        System.out.println(xor & 1);
        xor>>= 1;
    }

    return flip_cnt;
}