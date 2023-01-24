class Solution {
public:
int frq[10009];
set<int>st;
vector<int>arr;
int dp[10009];
int n;
int solve(int i)
{
    cout<<i<<" "<<n<<endl;
    if(i>=n)return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=0;
    ans=solve(i+1);
    ans=max(ans,arr[i]*frq[arr[i]]+solve((i+1<n&&arr[i+1]-1==arr[i]?i+2:i+1)));
    return dp[i]=ans;

}
    int deleteAndEarn(vector<int>& nums) {
        for(auto e:nums)frq[e]++;
        for(auto e:nums)st.insert(e);
        for(auto e:st)arr.push_back(e);
        sort(arr.begin(),arr.end());
        n=arr.size();
        memset(dp,-1,sizeof dp);
        cout<<"n= "<<n<<endl;
        return solve(0);

        
    }
};