#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main()
{
    int arr[] = { 64, 25, 12, 22 ,11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    printArray(arr, n);

    return 0;
};

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // one by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimun element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
        // Swap the found minumun element with the first element
        //TODO: fill blanks(s)
    }
}