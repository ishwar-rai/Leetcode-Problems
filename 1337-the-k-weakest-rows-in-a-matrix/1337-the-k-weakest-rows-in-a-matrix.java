class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
        int row = mat.length;
        int col = mat[0].length;
        int[] res = new int[k];
        int[] oneMat = new int[row];
        int x=0;
        for(int i=0; i<row; i++){
            int ones=0;
            for(int j=0; j<col; j++){
                if(mat[i][j]==1) ones++;
            }
            oneMat[x++] = ones;
        }
        
        for(int i=0; i<k; i++){
            int min = Integer.MAX_VALUE;
            int minIndex = 0;
            for(int j=0; j<row; j++){
                if(oneMat[j]<min){
                    min = oneMat[j];
                    minIndex = j;
                }
            }
            res[i] = minIndex;
            oneMat[minIndex] = Integer.MAX_VALUE;
        }
        return res;
    }
}