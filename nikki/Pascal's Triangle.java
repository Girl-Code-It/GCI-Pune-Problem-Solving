class Solution {
    public List<List<Integer>> generate(int n) {
        List<List<Integer>> res=new ArrayList<>();
        for(int i=0;i<n;i++){
            List<Integer> ans=new ArrayList<>();
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    ans.add(1);
                else{
                    int val=res.get(i-1).get(j-1)+res.get(i-1).get(j);
                    ans.add(val);
                }
                
            }
            res.add(ans);
        }
        return res;
    }
}