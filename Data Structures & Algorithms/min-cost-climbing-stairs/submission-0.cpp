class Solution {
public:
    int help(int i,vector<int>& dp,vector<int> &v){
        if(i==0){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        int l=help(i-1,dp,v)+v[i];
        int r=INT_MAX;
        if(i>1) r=help(i-2,dp,v)+v[i];
        return dp[i]=min(l,r);

    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> v;
        v.push_back(0);
        for(int i=0;i<cost.size();i++){
            v.push_back(cost[i]);
        }
        v.push_back(0);
        vector<int> dp(v.size(),-1);
        return help(v.size()-1,dp,v);
        
    }
};
