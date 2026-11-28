class Solution {
public:
    int unpaths(int m,int n,vector<vector<int>>&dp){
        if(m==0 && n==0){
            return 1;
        }
        if(m<0 || n<0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }

        return dp[m][n]=unpaths(m-1,n,dp)+unpaths(m,n-1,dp);
    }
    int uniquePaths(int m, int n) {
        //dp[][] stores no of ways to that cell
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return unpaths(m-1,n-1,dp);
    }
};