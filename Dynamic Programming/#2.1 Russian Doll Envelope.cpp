
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    
}
class Solution {
public:

static bool cmp(const vector<int>&a,const vector<int>&b)
{
    return a[0]<b[0];
}
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n =  envelopes.size();
        int maxi=0;
        int p=1;
        vector<int> dp(n, 1); 
        sort(envelopes.begin(), envelopes.end(),cmp) ;

    

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (envelopes[i][1] > envelopes[j][1] && envelopes[i][0]>envelopes[j][0]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            
        }
        for(auto i:dp)
        maxi=max(maxi,i);
        return maxi;
    }
};
