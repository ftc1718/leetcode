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
struct node
{
    struct TreeNode *val;
    struct node *next;
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

void push(Stack *S, struct TreeNode *node)
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

void destroyStack(Stack *S)
{
    struct TreeNode *node;
    while(!isEmpty(*S))
        pop(S, &node);
    free(*S);
}
    
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    Stack S;
    struct TreeNode *node;
    int *arr;
    int i = 0;
    initStack(&S);
    arr = (int*)malloc(100 * sizeof(int));
    node = root;
    while(node || !isEmpty(S))
    {
        while(node)
        {
            push(&S, node);
            node = node->left;
        }
        if(!isEmpty(S))
        {
            pop(&S, &node);
            *(arr + i) = node->val;
            i++;
            node = node->right;
        }
        
    }
    destroyStack(&S);
    *returnSize = i;
    return arr;
}