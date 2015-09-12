/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
  * };
 */
int maxDepth(struct TreeNode *root) {
    int lDepth, rDepth;
    if(root == NULL){
        return 0;
    }
    lDepth = maxDepth(root->left);
    rDepth = maxDepth(root->right);
    return (lDepth > rDepth ? lDepth:rDepth) + 1;
}
