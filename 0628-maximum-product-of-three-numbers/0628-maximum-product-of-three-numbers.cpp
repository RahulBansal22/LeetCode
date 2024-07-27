class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        int n=nums.size();
        int m1=nums[n-3]*nums[n-2]*nums[n-1];
        int m2=nums[0]*nums[1]*nums[n-1];
        ans = max(m1,m2);
        return ans;
    }
};