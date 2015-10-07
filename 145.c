/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 typedef
 struct Node{
     struct TreeNode *val;
     struct Node *next;
 }Stacknode, *Stack;
void initStack(Stack *S)
{
    (*S) = (Stack)malloc(sizeof(Stacknode));
    (*S)->next = NULL;
}
int isEmpty(Stack S)
{
    if(S->next == NULL)
        return 1;
    else
        return 0;
}
void push(Stack *S, struct TreeNode* node)
{
    Stacknode *s;
    s = (Stacknode *)malloc(sizeof(Stacknode));
    s->val = node;
    s->next = (*S)->next;
    (*S)->next = s;
    
}
void pop(Stack *S, struct TreeNode **node)
{
    Stacknode *s;
    s = (*S)->next;
    (*S)->next = s->next;
    *node = s->val;
    free(s);
}

struct TreeNode* getTop(Stack S)
{
    return S->next->val;
}
void destroyStack(Stack *S)
{
    struct TreeNode *node;
    while(!isEmpty(*S))
        pop(S, &node);
    free(*S);
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    Stack S; struct TreeNode *p, *q, *r = NULL;
    int cnt = 0;
    initStack(&S);
    int *ret = (int*)malloc(sizeof(int)); // should alloc a memory for ret first
    while(root)
    {
        push(&S, root);
        root = root->left;
    }
    while(!isEmpty(S))
    {
        p = getTop(S);
        if(p->right == NULL || r == p->right)
        {
            cnt++;
            pop(&S, &q);
            r = q;
            ret = (int*)realloc(ret, cnt * sizeof(int));
            ret[cnt - 1] = q->val;
        }
        else
        {
            q = p->right;
            while(q)
            {
                push(&S, q);
                q = q->left;
            }
        }
    }
    
    *returnSize = cnt;
    return ret;
}