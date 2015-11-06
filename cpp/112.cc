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
    bool hasPathSum(TreeNode* root, int sum) {
        int total(0);
        while(root || !s1.empty())
        {
            while(root)
            {
                total += root->val;
                if(total == sum && !root->left && !root->right)
                    return true;
                /*if(total == sum && !root->left && !root->right)
                    return true;
                else if(total > sum)
                {
                    total -= root->val;
                    root = NULL;
                    break;
                }*/
                s1.push(root);
                s2.push(total);
                root = root->left;
            }
            if(!s1.empty())
            {
                root = s1.top();
                s1.pop();
                total = s2.top();
                s2.pop();
                root = root->right;
            }
        }
        return false;
    }
private:
    stack<TreeNode*> s1;
    stack<int> s2;
};//negative numbers
//[1,-2,-3,1,3,-2,null,-1] -4
//[1,-2,-3,1,3,-2,null,-1] -3