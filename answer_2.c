#include <stdio.h>
#include <time.h>

void insertionSort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    printf("Sorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n, arr[50];
    printf("Enter n\n");
    scanf("%d", &n);
    printf("Enter elements\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    clock_t start, end;
    long int t;
    start = clock();
    insertionSort(n, arr);
    end = clock();
    t = end - start;
    printf("\nTotal time elapsed for Insertion sort: %f\n", (double)t / (double)CLOCKS_PER_SEC);

    return 0;
}
