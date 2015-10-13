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
    if(!root) return root;
    node = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(node);
}