class Solution {
public:
int n;
int arr[200009];
int dp[200009];
int solve(int i)
{
    if(i>=n-1)return 1;
    if(dp[i]!=-1)return dp[i];
    long long ans=0;
    for(int j=1;j<=arr[i];j++)ans+=solve(i+j);
    return dp[i]=ans;
}
    bool canJump(vector<int>& arr) {
      
        // n=nums.size();
         int mx=0;
         bool ok=true;
         
         for(int i=0;i<arr.size();i++)
         {
             cout<<i<<" "<<mx<<endl;
             if(mx<i)
             {
                 ok=false;
                 break;
             }
             mx=max(mx,i+arr[i]);
         }
         return (mx>=arr.size()-1);
    }
};