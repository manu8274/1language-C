#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>

void exch(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[i];
    arr[j] = temp;
    return;
}

void merge(int arr[], int aux[], int left, int mid, int right)
{
    for (int k = left; k <= right; k++)
        aux[k] = arr[k];
    int i = left, j = mid + 1;
    for (int k = left; k <= right; k++)
    {
        if (i > mid)
            arr[k] = aux[j++];
        else if (j > right)
            arr[k] = aux[k++];
        else if (aux[i] < aux[j])
            arr[k] = aux[i++];
        else
        {
            arr[k] = aux[j++];
        }
    }
}

void merge_sort_recur(int arr[], int aux[], int left, int right)
{
    // base condition
    if (left >= right)
        return;
    // operations
    int mid = (left + right) / 2;
    merge_sort_recur(arr, aux, left, mid);
    merge_sort_recur(arr, aux, mid+1, right);
    merge(arr, aux, left, mid, right);
}

void merge_sort(int arr[], int n)
{
    int *aux = (int *)malloc(n * sizeof(int));
    merge_sort_recur(arr, aux, 0, n - 1);
    free(aux);
}

long long int time_elapsed(int n)
{
    int *arr = (int *)malloc(n * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    struct timeval before;
    gettimeofday(&before, NULL);
    long long int before_millis = before.tv_sec * 1000LL + before.tv_usec / 1000;

    merge_sort(arr, n);

    struct timeval after;
    gettimeofday(&after, NULL);
    long long int after_millis = after.tv_sec * 1000LL + after.tv_usec / 1000;
    return after_millis - before_millis;
}

void test_simple_input()
{
    int input[] = {5, 3, 1, 9, 7};
    int expected_output[] = {1, 3, 5, 7, 9};

    merge_sort(input, 5);

    for (int i = 0; i < 5; i++)
        assert(input[i] == expected_output[i]);
}

int main()
{
    // test_simple_input();

    long long int t1 = time_elapsed(4);
    long long int t2 = time_elapsed(8);
    printf("%lli", t2 * 1.0 / t1);
    return 0;
}