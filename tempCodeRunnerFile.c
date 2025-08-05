#include <stdio.h>
#include <stdlib.h>


int arr[] = {5, 2, 3, 1, 4};
int n = sizeof(arr) / sizeof(arr[0]);


int comp(const void *a, const void *b) 
{
  	printf("a = %d, b = %d\n", *(int*)a, *(int*)b);
 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
  
  	printf("\n\n");
    return (*(int *)b - *(int *)a);
}

int main() {


    // Sort the array arr
    qsort(arr, n, sizeof(arr[0]), comp);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}