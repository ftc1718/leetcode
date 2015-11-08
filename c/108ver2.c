/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if(numsSize)
    {
        int index = numsSize / 2;
        struct TreeNode *T = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        T->val = nums[index];
        T->left = sortedArrayToBST(nums, index);
        T->right = sortedArrayToBST(nums + index + 1, numsSize - index - 1);
        return T;
    }
    else
    {
        return NULL;
    }
}