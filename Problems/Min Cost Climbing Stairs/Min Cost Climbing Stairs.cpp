class Solution {
//Author: Abdullah Moamen

public:
int n;
int arr[1000];
int dp[1000];
int solve(int i)
{
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];
    long long op1=1e9,op2=1e9;
     return dp[i]= min(solve(i+1),solve(i+2))+arr[i];
}
    int minCostClimbingStairs(vector<int>& b) {
        n=b.size();
        memset(dp,-1,sizeof dp);
        for(int i=0;i<n;i++)arr[i]=b[i];
        return min(solve(0),solve(1));

    }
};