/*
Title: Randomized Quick Sort
Aim: To sort using random pivot.

Algorithm:
1. Pick random pivot
2. Partition
3. Recursively sort
*/

#include<stdio.h>
#include<stdlib.h>

int partition(int a[], int low, int high)
{
    int pivot=a[high],i=low-1,j,temp;

    for(j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            temp=a[i]; a[i]=a[j]; a[j]=temp;
        }
    }

    temp=a[i+1]; a[i+1]=a[high]; a[high]=temp;
    return i+1;
}

int randomPartition(int a[], int low, int high)
{
    int r=low+rand()%(high-low+1),temp;
    temp=a[r]; a[r]=a[high]; a[high]=temp;
    return partition(a,low,high);
}

void quickSort(int a[], int low, int high)
{
    if(low<high)
    {
        int pi=randomPartition(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}

int main()
{
    int n,i,a[20];

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    quickSort(a,0,n-1);

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}

// Code By @surya-scsvmv
