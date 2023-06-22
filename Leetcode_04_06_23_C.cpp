class Solution {
    public long matrixSumQueries(int n, int[][] queries) {
        long ans =0;
        int m = queries.length;
        int row =n;
        int col = n;
        Set<Integer> visitedcol = new HashSet<>();
        Set<Integer> visitedrow = new HashSet<>();
        for(int i=m-1;i>=0;i--)
        {
            int type = queries[i][0];
            int index = queries[i][1];
            long val = (long)queries[i][2];
            
            if(type==0 && !visitedrow.contains(index))
            {
                ans = ans +((long) val *(long)col);
                row--;
                visitedrow.add(index);
            }
            else if(type==1 && !visitedcol.contains(index))
            {
                ans = ans +((long) val *(long)row);
                col--;
                visitedcol.add(index);
            }
        }
        return ans;
    }
}
