class Solution {
public:
    int myfab(int n, vector<int>&dp){
        if(n==1 || n==0){
            return dp[n]=n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n]=myfab(n-1,dp)+myfab(n-2,dp);
        return dp[n];
        
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return myfab(n,dp);
    }
};