class Solution {
public:
int arr[101];
int dp[101];
int n;
int solve(int i)
{
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=solve(i+1);
    ans=max(ans,solve(i+2)+arr[i]);
    return dp[i]=ans;
}
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
    n=nums.size();
    for(int i=0;i<n;i++)arr[i]=nums[i];
    return solve(0);
        
    }
};