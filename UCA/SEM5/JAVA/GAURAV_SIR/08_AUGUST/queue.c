#include <stdio.h>
#include <assert.h>
#include <errno.h>

struct node
{
    int val;
    struct node *next;
};

struct node *head = NULL;
int n = 0;

void push(int value)
{
    printf("in push l1\n");
    struct node *new;
    new->val = value;
    new->next = head;
    head = new;
    n++;
}

int pop()
{
    int vl = -1;
    if (head == NULL)
    {
        perror("------------------UNDERFLOW----------------------");
    }
    else
    {
        vl = head->val;
        head = head->next;
    }
    n--;
    return vl;
}

int isEmpty()
{
    return n == 0;
}

int size()
{
    return n;
}

void test_sample()
{
    // printf("%d", 1234);
    push(1);
    push(2);
    push(3);
    printf("size = %d\n", size());
    printf("pop 1 = %d\n", pop());
    printf("pop 2 = %d\n", pop());
    printf("pop 2 = %d\n", pop());
    printf("isEmpty() = %d\n", isEmpty());
    // assert(pop() == 1);
    // assert(pop() == 2);
    // assert(size() == 0);
}

int main()
{
    test_sample();
    return 0;
}