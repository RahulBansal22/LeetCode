class Solution {
public:
   int reverse(vector<char>& s,int i){
       int n=s.size();
   if(i>n-i-1){
       return -1;}
       else {
      swap(s[i],s[n-i-1]);
      i++;
      int ans= reverse(s,i);
       return ans;
   }
   }
    void reverseString(vector<char>& s) {
     int i=0,n=s.size();
     reverse(s,i);
    
    }
};