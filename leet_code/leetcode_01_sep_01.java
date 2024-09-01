class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        int [][] arr = new int [m][n];

        int indx = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){

                if(indx < original.length){arr[i][j] = original[indx];}
                indx++;
            }
        }
        if(original.length != indx) return new int [0][0];

        return arr;
    }
}