class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=1;
        int maxi1=1;
        int maxi2=1;
        int n=nums.size();
        maxi1*=nums[n-1]*nums[n-2]*nums[n-3];
        maxi2=nums[0]*nums[1]*nums[n-1];
        maxi=max(maxi1,maxi2);
        return maxi;
    }
};