/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
int Height(struct TreeNode *root)
{
    int lheight, rheight;
    if(!root)
        return 0;
    lheight = Height(root->left);
    rheight = Height(root->right);
    return (lheight > rheight ? lheight : rheight) + 1;
}

bool isBalanced(struct TreeNode* root) {
    bool lb, rb;
    if(!root)
        return true;
    lb = isBalanced(root->left);
    rb = isBalanced(root->right);
    return (lb && rb && (abs(Height(root->left) - Height(root->right)) < 2));
}