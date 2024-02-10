// #https://leetcode.com/problems/maximum-length-of-pair-chain/description/


#include<bits/stdc++.h>
using namespace std;
int main()
{

}

class Solution {
public:

    static bool com(const vector<int>&a,const vector<int>&b)
    {
        if(b[1]>a[1])
        return true;
        else
        return false;
    }
    int findLongestChain(vector<vector<int>>& pairs) {

        int cnt=1;
        sort(pairs.begin(),pairs.end(),com);
        int n=pairs.size();
        // isnerting dp here
        vector<int>dp(n,1);

      pair<int,int>cur_pair= {pairs[0][0],pairs[0][1]};
      
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {   
                // check if first ele is greater or not
                if(pairs[i][0]>pairs[j][1])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        for(auto i:dp)
        cnt=max(cnt,i);
      return cnt;
    }
};