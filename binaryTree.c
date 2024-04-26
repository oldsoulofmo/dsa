// Binary tree 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

struct node *createTree(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data = data;
    node->lchild = NULL;
    node->rchild = NULL;

    return node;
};

int main()
{
    struct node *root = createTree(1);
    root->lchild = createTree(2);
    root->rchild = createTree(3);
    root->lchild->lchild = createTree(4);
    root->lchild->rchild = createTree(5);

    printf("%d\t%d\t%d\t%d\t%d\n", root->data, root->lchild->data, root->rchild->data, root->lchild->lchild->data, root->lchild->rchild->data);

    return 0;
}