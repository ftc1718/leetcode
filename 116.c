/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  struct TreeLinkNode *left, *right, *next;
 * };
 *
 */
 
 typedef
 struct node
 {
     struct TreeLinkNode *data;
     struct node *next;
 }Queuenode, *Queue;
 
 void initQueue(Queue *Q)
 {
     *Q = (Queue)malloc(sizeof(Queuenode));
     (*Q)->next = NULL;
 }
 
 int isEmpty(Queue Q)
 {
     if(!Q->next)
        return 1;
    else
        return 0;
 }
 void enQueue(Queue *Q, struct TreeLinkNode *node)
 {
     Queuenode *p = *Q;
     Queuenode *q = (Queuenode*)malloc(sizeof(Queuenode));
     while(p->next)
        p = p->next;
    q->data = node;
    q->next = NULL;
    p->next = q;
 }
 
 void deQueue(Queue *Q, struct TreeLinkNode **node)
 {
     Queuenode *p = (*Q)->next;
     (*Q)->next = p->next;
     *node = p->data;
     free(p);
 }
 
 struct TreeLinkNode *queueFront(Queue Q)
 {
     struct TreeLinkNode *node;
     node = Q->next->data;
     return node;
 }
 
 void destroyQueue(Queue *Q)
 {
     struct TreeLinkNode *node;
     while(!isEmpty(*Q))
        deQueue(Q, &node);
    free(*Q);
 }
void connect(struct TreeLinkNode *root) {
    Queue Q;
    struct TreeLinkNode *node;
    if(!root)
    {
        return ;
    }
    initQueue(&Q);
    enQueue(&Q, root);
    enQueue(&Q, NULL);
    while(!isEmpty(Q))
    {
        deQueue(&Q, &node);
        if(node)
        {
            node->next = queueFront(Q);
            if(node->left)
            {
                enQueue(&Q, node->left);
                enQueue(&Q, node->right);
            }
        }
        else if(!isEmpty(Q))
           enQueue(&Q, NULL); 
    }
    destroyQueue(&Q);
    return ;
}