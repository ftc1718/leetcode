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
    int kthSmallest(TreeNode* root, int k) {
        stack<struct TreeNode*> S;
        struct TreeNode *p = root;
        while(p || !S.empty())
        {
            while(p)
            {
                S.push(p);
                p = p->left;
            }
            if(!S.empty())
            {
                p = S.top();
                k--;
                if(k == 0)
                    return p->val;
                S.pop();
                p = p->right;
            }
        }
        return 0;
    }
};