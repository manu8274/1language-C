#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <sys/time.h>

void exch(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        exch(arr, i, min);
    }
}

void test_simple()
{
    int input[] = {5, 3, 1, 9, 7};
    int output[] = {1, 3, 5, 7, 9};
    selection_sort(input, 5);

    for (int i = 0; i < 5; i++)
        assert(input[i] == output[i]);
}

long long time_elapsed(int n)
{
    srand(time(NULL));
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        arr[i] = rand();
    struct timeval before;       // get a value in structure
    gettimeofday(&before, NULL); // before gives two vale a number of sec and a number microsec
    long long before_millis = before.tv_sec * 1000LL + before.tv_usec / 1000;
    selection_sort(arr, n);
    struct timeval after;
    gettimeofday(&after, NULL);
    long long after_millis = after.tv_sec * 1000LL + after.tv_usec / 1000;

    // printf("printf ran in : %lli millis", after_millis - before_millis);
    return after_millis - before_millis;
}

int main()
{
    long long t1 = time_elapsed(1000);
    long long t2 = time_elapsed(2000);
    printf("%lf", t2 * 1.0 / t1);
    return 0;
}