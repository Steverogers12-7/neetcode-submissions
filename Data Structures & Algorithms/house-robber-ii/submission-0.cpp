class Solution {
public:
    int help(int i,vector<int> &nums,vector<int> &dp){
        if(i==0) return nums[i];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick=help(i-2,nums,dp)+nums[i];
        int n_pick=help(i-1,nums,dp);
        return dp[i]=max(pick,n_pick);

    }
    int rob(vector<int>& nums) {
        // choosing way out of this circle appraoch as if 0 is included then we cannot take n-1 and if 1 is min then only possible
        //so doing these as two parts and returning the max 
        vector<int> a;
        vector<int> b;
        for(int i=0;i<nums.size();i++){
            if(i==0) a.push_back(nums[i]);
            else if(i==nums.size()-1) b.push_back(nums[i]);
            else{
                a.push_back(nums[i]);
                b.push_back(nums[i]);
            }
        }
        vector<int> dp1(a.size(),-1);
        vector<int> dp2(b.size(),-1);
        return max(help(a.size()-1,a,dp1),help(b.size()-1,b,dp2));
    }
};
