class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int n=nums.size();
        for(auto x:m){
            if(x.second>n/2)
                return x.first;
        }
        return 0;
    }
};