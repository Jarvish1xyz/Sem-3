#include <stdio.h>
#include <math.h>


void quickSort(int arr[], int low, int high) {
    int f = 1;
    int temp;
    int i = low, j = high + 1;
    int key = arr[low];
    if (low < high) {
        while (f) {
            i++;
            while (key > arr[i])
            {
                i++;
            }
            j--;
            while (key < arr[j])
            {
                j--;
            }

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else
            {
                f = 0;
            }
        }
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }

}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Data : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}