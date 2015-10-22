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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        if(root)
        {
            q.push(root);
            q.push(NULL);
            int i = 0;
            vector<int> vec;
            while(!q.empty())
            {
                TreeNode *tmp = q.front();
                q.pop();
                if(tmp)
                {
                    vec.push_back(tmp->val);
                    if(tmp->left)
                        q.push(tmp->left);
                    if(tmp->right)
                        q.push(tmp->right);
                }
                else
                {
                    if(!q.empty())
                        q.push(NULL);
                    ret.push_back(vec);
                    vec.clear();
                }
            }
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
private:
    queue<TreeNode*> q;
};