/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //preorder
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> vec;
        preOrder(vec, root, "");
        return vec;
    }
private:
    void preOrder(vector<string>& vec, TreeNode *root, string s)
    {
        if(root)
        {
            if(s.empty())
                s += to_string(root->val);
            else
                s += "->" + to_string(root->val);
            if(!root->left && !root->right)
                vec.push_back(s);
            else
            {
                preOrder(vec, root->left, s);
                preOrder(vec, root->right, s);
            }
        }
    }
};