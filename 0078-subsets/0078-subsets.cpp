class Solution {
void subset(vector<int>& nums,vector<vector<int>>& ans,vector<int> output,int i){
    if(i>=nums.size()){
        ans.push_back(output);
        return;
    }
    subset(nums,ans,output,i+1);
    int e=nums[i];
    output.push_back(e);
    subset(nums,ans,output,i+1);
}


public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int i=0;
        subset(nums,ans,output,i);
         return ans;
    }
   
};