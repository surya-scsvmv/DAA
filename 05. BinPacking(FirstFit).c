/*
Title: First Fit Bin Packing
Aim: To allocate items into bins.

Algorithm:
1. Read items and capacity
2. For each item check bins
3. Place in first possible bin
*/

#include<stdio.h>

int main()
{
    int n,i,j;
    float bin[10], item[10], cap;

    scanf("%d",&n);
    scanf("%f",&cap);

    for(i=0;i<n;i++)
    {
        scanf("%f",&item[i]);
        bin[i]=cap;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(bin[j]>=item[i])
            {
                bin[j]-=item[i];
                break;
            }
        }
    }

    for(i=0;i<n;i++)
        printf("Bin %d: %.2f\n",i+1,bin[i]);

    return 0;
}

// Code By @surya-scsvmv
