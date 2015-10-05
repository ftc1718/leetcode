/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    int lDepth, rDepth;
    if(root == NULL)
        return 0;
    if(root->left && root->right)
    {
        lDepth = minDepth(root->left);
        rDepth = minDepth(root->right);
        return (lDepth < rDepth ? lDepth:rDepth) + 1;
    }
    else if(root->left)
        return minDepth(root->left) + 1;
    else
        return minDepth(root->right) + 1;
}