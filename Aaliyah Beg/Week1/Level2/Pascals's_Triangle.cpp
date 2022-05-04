#define pb push_back
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numsRows);
        ans[0].pb(1);
        for(int i=1;i<numRows;i++){
            ans[i].pb(1);
            for(int j=0;j<ans[i-1].size()-1;j++){
                int a=ans[i-1][j];
                int b=ans[i-1][j+1];
                ans[i].pb((a+b));
                
            }
            ans[i].pb(1);
        }
        return ans;
    }
};