class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        
        for(int n:nums){
            m[n]++;}
            
            
            int maxfreq=0;
            for(auto a:m){
                maxfreq=max(maxfreq,a.second);
            }
            
            int maxelements=0;
            for(auto x:m){
                if(x.second==maxfreq){
                    maxelements++;
                }
            }
            int total=maxelements*maxfreq;
        return total;
        }
                   
                   
                   
            
    
};