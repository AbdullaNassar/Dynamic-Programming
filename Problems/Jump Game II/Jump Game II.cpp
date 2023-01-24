class Solution {
public:
int dp[100009];
int solve(vector<int>& nums, int pos = 0) {
	if(pos >= size(nums) - 1) return 0; 
    if(dp[pos]!=-1)return dp[pos];       
	int minJumps = 10001;  // initialising to max possible jumps + 1
	for(int j = 1; j <= nums[pos]; j++)  // explore all possible jump sizes from current position
		minJumps = min(minJumps, 1 + solve(nums, pos + j));        
	return dp[pos]= minJumps;
}
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
       return solve(nums); 
        
    }
};