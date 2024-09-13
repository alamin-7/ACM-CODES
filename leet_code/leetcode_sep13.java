public int[] xorQueries(int[] arr, int[][] queries) {

    int [] a = new int [queries.length];
    int index = 0, startIndex, endIndex, xor;

    for(int i = 0; i < queries.length; i++){
       
        startIndex = queries[i][0];
        endIndex = queries[i][1];

        if(startIndex == endIndex){xor = arr[startIndex];}
        else {xor = arr[startIndex] ^ arr[startIndex+1];}
    

        for(int j = startIndex+2; j <= endIndex; j++){
            xor = xor ^ arr[j];
        }
        a[index++] = xor;
    }

    return a;
}