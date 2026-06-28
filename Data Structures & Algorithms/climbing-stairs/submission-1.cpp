class Solution {
public:
    //using recursion as there is int return and two choices and we want all ways
    int help(int i,vector<int> &dp){
        if(i==0) return 1;// as if he reaches 0 then there is a way so count it
        if(dp[i]!=-1) return dp[i];
        int l=help(i-1,dp);// 1st choice ki ek step liya ab dekhte hain 
        int r=0;
        if(i>1) r=help(i-2,dp); // we cannot go i-2 as l it will leads to -1 in case 1 
        return dp[i]=l+r; //since we needed all possible ways
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return help(n,dp);

        
    }
};
