/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void flatten(struct TreeNode* root) {
    while(root)
    {
        if(root->left)
        {
            struct TreeNode *t = root->left;
            while(t->right)
                t = t->right;
            t->right = root->right; //according to the question root->right after the rightest of root->left
            root->right = root->left;
            root->left = NULL;
        }
        root = root->right; // the root node has been disposed and root->right has been seen as a new tree
    }
}