/*
Title: Permutation using Recursion
Aim: To generate permutations of elements.

Algorithm:
1. If start == end print array
2. Swap elements
3. Call recursion
4. Backtrack
*/

#include<stdio.h>

void perm(int arr[], int start, int end)
{
    int i, temp;
    if(start == end)
    {
        for(i=0;i<=end;i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    else
    {
        for(i=start;i<=end;i++)
        {
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;

            perm(arr, start+1, end);

            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
        }
    }
}

int main()
{
    int n,i,a[10];
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    perm(a,0,n-1);
    return 0;
}

// Code By @surya-scsvmv
