//problem link : https://leetcode.com/problems/longest-increasing-subsequence/
#include<bits/stdc++.h>
using namespace std;
int main()
{

}
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n,1);
        int maxi=INT_MIN;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0; j<i;j++)
            {
                if(nums[i]>nums[j])
                
               
            }
        }
        for(auto i:dp)
        {
            if(i>maxi)
            maxi=i;
        }
        return maxi;
    }
};


int main()
{
    
}