/*
Title: Dijkstra Algorithm
Aim: To find shortest path.

Algorithm:
1. Initialize distances
2. Pick minimum unvisited
3. Update neighbors
*/

#include<stdio.h>
#include<limits.h>

int main()
{
    int n,i,j,src;
    int cost[10][10], dist[10], visited[10]={0};

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&cost[i][j]);

    scanf("%d",&src);

    for(i=0;i<n;i++)
        dist[i]=cost[src][i];

    visited[src]=1;

    for(i=1;i<n;i++)
    {
        int min=INT_MAX,u;
        for(j=0;j<n;j++)
        {
            if(!visited[j] && dist[j]<min)
            {
                min=dist[j];
                u=j;
            }
        }

        visited[u]=1;

        for(j=0;j<n;j++)
        {
            if(!visited[j] && dist[u]+cost[u][j]<dist[j])
                dist[j]=dist[u]+cost[u][j];
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",dist[i]);

    return 0;
}

// Code By @surya-scsvmv
