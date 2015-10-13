/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
typedef struct Avlnode
{
    struct TreeNode *node;
    struct Avlnode *left;
    struct Avlnode *right;
    int height;
}AvlNode, *AvlTree;

int Max(int Lhs, int Rhs)
{
    return Lhs > Rhs ? Lhs : Rhs;
}

int Height(AvlTree T)
{
    if(T == NULL)
        return -1;
    return T->height;
}

AvlNode*
SingleRotateWithRight(AvlNode *k1)
{
    AvlNode *k2;
    k2 = k1->right;
    k2->node = k1->node->right;
    k1->right = k2->left;
    k1->node->right = k2->node->left;
    k2->left = k1; 
    k2->node->left = k1->node;
    k1->height = Max(Height(k1->left), Height(k1->right)) + 1;
    k2->height = Max(k1->height, Height(k2->right)) + 1;
    return k2;
}

AvlTree Insert(int x, AvlTree T)
{
    if(T == NULL)
    {
        T = (AvlTree)malloc(sizeof(AvlNode));
        T->node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        T->left = T->right = NULL;
        T->node->val = x;
        T->node->left = T->node->right = NULL;
        T->height = 0;
    }
    else
    {
        AvlNode *tmp = Insert(x, T->right);
        T->right = tmp;
        T->node->right = tmp->node;
        if(Height(T->right) - Height(T->left) == 2)
            T = SingleRotateWithRight(T);
    }
    T->height = Max(Height(T->left), Height(T->right)) + 1;
    return T;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    int i;
    AvlTree T = NULL;
    if(numsSize == 0)
        return NULL;
    for(i = 0; i < numsSize; i++)
        T = Insert(nums[i], T);
    return T->node;
}// time limite exceeded