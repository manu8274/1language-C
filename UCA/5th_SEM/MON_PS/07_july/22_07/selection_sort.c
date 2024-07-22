#include <stdio.h>
#include <assert.h>

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

void test_simple(){
    int input[] = { 5, 3, 1, 9, 7};
    int output[] = {1, 3, 5, 7, 9};
    selection_sort(input,5);

    for(int i = 0 ; i < 5 ; i++)    assert(input[i] == output[i]);
}

int main()
{
    // int arr[] = {5, 3, 1, 9, 7};
    // selection_sort(arr, 5);
    // for (int i = 0; i < 5; i++) printf("%d\n", arr[i]);
    test_simple();
    return 0;
}