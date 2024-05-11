#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *BuildOneTwoThree()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    return head;
}

void main()
{
    struct node *linkedList = BuildOneTwoThree();
    printf("%d %d %d", linkedList->data, linkedList->next->data, linkedList->next->next->data);
}
