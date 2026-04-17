/*
Title: Prim's Algorithm
Aim: To find Minimum Spanning Tree.

Algorithm:
1. Start from vertex 0
2. Select minimum edge
3. Add to MST
*/

#include<stdio.h>
#include<limits.h>

int main()
{
    int n,i,j,min,u,v;
    int cost[10][10], visited[10]={0};

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&cost[i][j]);

    visited[0]=1;

    for(i=0;i<n-1;i++)
    {
        min=INT_MAX;
        for(u=0;u<n;u++)
        {
            if(visited[u])
            {
                for(v=0;v<n;v++)
                {
                    if(!visited[v] && cost[u][v]<min)
                    {
                        min=cost[u][v];
                        j=v;
                    }
                }
            }
        }
        printf("%d\n",min);
        visited[j]=1;
    }
    return 0;
}

// Code By @surya-scsvmv
