/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    struct TreeNode *node;
    if(root){
        invertTree(root->left);
        invertTree(root->right);
        node = root->left;
        root->left = root->right;
        root->right = node;
        return root;
    }
}