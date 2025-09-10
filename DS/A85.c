#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    srand(time(NULL));

    int arr[n];
    printf("Enter Data : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    return 0;
}