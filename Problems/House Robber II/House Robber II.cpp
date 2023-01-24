class Solution {
public:
int arr[101];
int dp[101][2];
int solve(int i,bool take)
{
    if(i>=n)return 0;
    if(dp[i][take]!=-1)return dp[i][take];
    int ans=solve(i+1,take);
    if(i!=n-1||(i==n-1&&!take))ans=max(ans,solve(i+2,take)+arr[i]);
    return  dp[i][take]=ans;
}
int n;
    int rob(vector<int>& nums) {
        n=nums.size();
        for(int i=0;i<n;i++)arr[i]=nums[i];
        memset(dp,-1,sizeof dp);
           return max(solve(1,0),solve(2,1)+arr[0]);
    }
};