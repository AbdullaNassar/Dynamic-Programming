class Solution {
//Author: Abdullah Moamen
public:
int dp[50];
int solve(int n)
{
     if(n==0)return 1;
     if(dp[n]!=-1)
     {
       //  cout<<"here"<<endl;
         return dp[n];
     }
        int ans=solve(n-1);
        if(n-2>=0)ans+=solve(n-2);
        return dp[n]=ans;
}
    int climbStairs(int n) {
     memset(dp,-1,sizeof dp);
        return solve(n);
        
    }
};