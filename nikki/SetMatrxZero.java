class Solution {
    public void setZeroes(int[][] matrix) {
        int r=matrix.length;
        int c=matrix[0].length;
        HashMap<Integer,Integer> rows=new HashMap<>();
        HashMap<Integer,Integer> cols=new HashMap<>();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    rows.put(i,0);
                    cols.put(j,0);
                }
                    
            }
        }
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(rows.containsKey(i) || cols.containsKey(j)){
                    matrix[i][j]=0;
                }
            }
        }
    }
}