#include<stdio.h>
void printArray(int *A ,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void insertionsort(int *A,int n)
{
    int temp,i,j;
    for (int  i = 0; i < n; i++)
    {
        j = i-1;
        temp = A[i];
    while (j >= 0 && A[j]  > temp )
    {
        A[j+1] = A[j];
        j--;
    }
    A[j+1] = temp;
    }
}
int main()
{
    int A[]={12,54,65,7,23,9};
    int n = sizeof(A)/ sizeof(int);
    printf("Unsorted array : \n");
    printArray(A , n);

    insertionsort(A , n);
    
    printf("Sorted array : \n");
    printArray(A , n);
    return 0;
}