#include<stdio.h>
void printArray(int *A ,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void BubbleSort(int *A ,int n)
{
    int temp;
    for (int  i = 0; i < n-1; i++)//For number of passes
    {
        for (int  j = 0; j < n-1-i; j++)//For comparison in each pass
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }      
}
int main(){
    int A[]={39,21,20,29,23,25,3};
    int n = sizeof(A) / sizeof(int);

    printf("Unsorted array : \n");
    printArray(A , n);// print the array before sorting

    BubbleSort(A , n);//Function to sort the array
    
    printf("Sorted array : \n");
    printArray(A , n);// print the array After sorting 
    return 0;
}