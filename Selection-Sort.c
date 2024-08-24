#include<stdio.h>

void printArray(int *A ,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void selectionSort(int *A, int n) 
{
    int min,temp;    
    // One by one move the boundary of the unsorted subarray
    for (int i = 0; i < n-1; i++)
     {
        // Find the minimum element in the unsorted array
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[min]) 
            {
                min = j;
            }
        }
        // Swap the found minimum element with the first element
            temp = A[min];
            A[min] = A[i];
            A[i] = temp;
    }
}
int main()
{
    int A[]={12,6,7,5,2,1};
    int n= sizeof(A)/sizeof(int);
    printf("Unsorted array : \n");
    printArray(A , n);
    
    selectionSort(A , n);
    
    printf("Sorted array : \n");
    printArray(A , n);
    return 0;
}