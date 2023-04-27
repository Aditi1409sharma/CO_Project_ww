/*
[5 points] Consider the following program to insert a node “n” at a given position “pos” in
a linked list “head”, as discussed in class. Write this program without the “->” operator to
access pointers to structure elements. Use the “.” operator instead. Don’t change the
names of variables or the number of statements in this program.
*/
#include <stdio.h>
# include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *insert_pos(struct node *head, struct node *n, int pos)
{
    if (pos == 0)
    {
        (*n).next = head;
        return n;
    }
    struct node *tmp = head;
    int i = 0;
    while (i != pos - 1 && tmp)
    {
        tmp = (*tmp).next;
        i = i + 1;
    }
    if (tmp != NULL)
    {
        (*n).next = tmp->next;
        (*tmp).next = n;
    }
    return head;
}
struct node *allocate_node(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Unable to allocate more memory\n");
        return NULL;
    }
    (*n).val = val;
    (*n).next = NULL;
    return n;
}

void print_list(struct node *head)
{
    struct node *tmp = head;
    while (tmp != NULL)
    {
        printf("%d\n", tmp->val);
        tmp = (*tmp) .next;
    }
    printf("\n");
}
int main()
{
    struct node *head = NULL;
    struct node *n;
    int i;
    for (i = 0; i <= 5; i++)
    {
        n = allocate_node(i);
        head = insert_pos(head, n,i);
    }
    print_list(head);
    return 0;
}
