class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }

        sort(nums.begin(),nums.end());
        bool flag=false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                flag=true;
                break;
            }
        }
        return flag;


        
    }
};