class Solution {
public:

    bool fun(vector<int>&nums, int index,int cur_sum, int target,vector<vector<int>>dp)
    {
        int n=nums.size();

         if(cur_sum==target) // found the element
           return true;

       
    // cout<<cur_sum<< " ";
            if(index==n-1)
        {
            return cur_sum==target;
        }
        

        

        if(dp[index][target]!=-1)
        return dp[index][target];
       
       

    
        bool a=false;
        // tkaing this val  ue
        if(nums[index]<=target)
        a =fun(nums,index+1,cur_sum +nums[index],target,dp);

        bool b= fun(nums, index+1,cur_sum,target,dp);

        return dp[index][target]=a||b;
        
    }
    bool canPartition(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        for(auto i:nums)
        sum+=i;

        if(sum%2!=0)
        return false;
        
        int target= sum/2;
        //find s subset whose sum is sum/2;
        vector<vector<int>>dp(n+1,vector<int>(n*100,-1));

        return fun(nums,0,0,target,dp);
        
    }
};
