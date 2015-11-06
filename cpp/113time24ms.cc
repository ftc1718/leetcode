/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> vec;
        vector<int> tmp;
        preOrder(vec, root, tmp, sum);
        return vec;
    }
private:
    void preOrder(vector<vector<int>> &vec, TreeNode *root, vector<int> tmp, const int sum)
    {
        if(root)
        {
            tmp.push_back(root->val);
            if(root->val == sum && !root->left && !root->right)
                vec.push_back(tmp);
            else
            {
                preOrder(vec, root->left, tmp, sum - root->val);
                preOrder(vec, root->right, tmp, sum- root->val);
            }
        }
    }
};