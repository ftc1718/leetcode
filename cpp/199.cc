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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> vec;
         if(root)
        {
            int val;
            q.push(root);
            q.push(NULL);
            while(!q.empty())
            {
                TreeNode *node = q.front();
                q.pop();
                if(node)
                {
                    val = node->val;
                    if(node->left)
                        q.push(node->left);
                    if(node->right)
                        q.push(node->right);
                }
                else if(!q.empty())
                {
                    vec.push_back(val);
                    q.push(NULL);
                }
            }
            vec.push_back(val);
        }
        return vec;
    }
private:
    queue<TreeNode*> q;
};