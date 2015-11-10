/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//deal root->right then root->left then root
class Solution {
public:
    void flatten(TreeNode* root) {
        flattenWork(root);
    }
private:
    TreeNode *pre = nullptr;
    void flattenWork(TreeNode *root)
    {
        if(root)
        {
            flattenWork(root->right);
            flattenWork(root->left);
            root->right = pre;
            root->left = nullptr;
            pre = root;
        }
        
    }
};