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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return df(root);
        
    }
    int df(TreeNode* root){
        if(root->left==nullptr && root->right == nullptr) return 1;
        else if(root->left==nullptr && root->right !=nullptr) return 1 + df(root->right);
        else if(root->right == nullptr && root->left !=nullptr )return 1+ df(root->left);
        else return 1+ max(df(root->left), df(root->right));
    }
};
