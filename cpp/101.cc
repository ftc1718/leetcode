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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return symmetric(root->left, root->right);
    }
    
    bool symmetric(TreeNode *left, TreeNode *right){
        if(!left && !right) return true;
        if(!left || !right) return false;
        return left->val == right->val && symmetric(left->left, right->right) 
        && symmetric(left->right, right->left);
    }
};// recursive  4ms






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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        
        queue<pair<TreeNode*, TreeNode*> > q;
        q.push(make_pair(root->left, root->right));
        
        while(!q.empty()){
            pair<TreeNode*, TreeNode*> p = q.front();
            q.pop();
            if(!p.first && !p.second) continue;
            if(!p.first || !p.second) return false;
            if(p.first->val != p.second->val) return false;
            q.push(make_pair(p.first->left, p.second->right));
            q.push(make_pair(p.first->right, p.second->left));
        }
        return true;
    }
};//BFS  7ms




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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        stack<TreeNode*> s1, s2;
        s1.push(root);
        s2.push(root);
        TreeNode *lp = root->left, *rp = root->right;
        
        while(lp || !s1.empty() || rp || !s2.empty()){
            if((!lp && rp) || (lp && !rp)) return false;
            if(lp && rp){
                if(lp->val != rp->val) return false;
                s1.push(lp);
                s2.push(rp);
                lp = lp->left;
                rp = rp->right;
            }
            else{
                lp = s1.top()->right;
                rp = s2.top()->left;
                s1.pop();
                s2.pop();
            }
        }
        
        return true;
    }
};//DFS  4ms