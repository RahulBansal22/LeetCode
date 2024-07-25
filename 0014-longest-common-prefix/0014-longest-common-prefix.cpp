class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string s=strs[0];
        string l=strs[n-1];
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=l[i]){
                return ans;}
            ans+=l[i];
        }
        return ans;
    }
};