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

void push(int val)
{
    if (head == NULL)
    {
        head->val = val;
        head->next = NULL;
    }
    else
    {
        struct node *new;
        new->val = val;
        new->next = head;
        head = new;
    }
    n++;
}

int pop()
{
    int vl = -1;
    if (head == NULL)
        perror("------------------UNDERFLOW----------------------");
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
    push(1);
    push(2);
    push(3);

    assert(pop() == 1);
    assert(pop() == 2);
    assert(size() == 0);
}

int main()
{
    test_sample();
    return 0;
}