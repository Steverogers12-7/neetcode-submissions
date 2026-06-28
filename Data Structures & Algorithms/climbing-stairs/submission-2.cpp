class Solution {
public:
    //using recursion as there is int return and two choices and we want all ways
    
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        
        dp[0]=0;
        for(int i=1;i<=n;i++){
            if(i<=3) dp[i]=i;
            else dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];

        
    }
};
