class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        int maxi=candies[0];
        int n=candies.size();
    
    for(int i=1;i<n;i++){
        if(candies[i]>maxi)
            maxi=candies[i];
    }
    
    vector<bool> result(n);
    for(int i=0;i<n;i++){
        if(candies[i]+e>=maxi){
            result[i]=true;
        }
        else{
            result[i]= false;
        }
    }
    return result;}
};