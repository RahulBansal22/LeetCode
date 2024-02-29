/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode* >q;
        q.push(root);
        bool isEven = true;
        while(!q.empty()){
          int s = q.size();
            
        int prev = INT_MAX;
            if(isEven) prev = INT_MIN;
            
            while(s--){
          root=q.front();
            q.pop();
                
                if(isEven&&(root->val%2==0 || root->val<=prev)){
                    return false;
                }
                if(!isEven &&(root->val%2!=0||root->val>=prev)){
                    return false;
                }
                prev=root->val;
                if(root->left)q.push(root->left);
                if(root->right)q.push(root->right);
            }
            isEven =!isEven;
        
        }return true;
    }
};