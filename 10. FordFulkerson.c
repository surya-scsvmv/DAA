/*
Title: Ford Fulkerson
Aim: To find maximum flow.

Algorithm:
1. Calculate min capacity path
2. Add flow
*/

#include<stdio.h>

int min(int a,int b){ return a<b?a:b; }

int main()
{
    int n,i,j,s,t;
    int cap[10][10], flow=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&cap[i][j]);

    scanf("%d%d",&s,&t);

    for(i=0;i<n;i++)
    {
        int f=min(cap[s][i],cap[i][t]);
        flow+=f;
    }

    printf("%d",flow);
    return 0;
}

// Code By @surya-scsvmv
