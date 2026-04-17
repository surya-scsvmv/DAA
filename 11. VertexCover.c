/*
Title: Vertex Cover
Aim: To find vertex cover using greedy.

Algorithm:
1. Pick edges
2. Mark vertices
*/

#include<stdio.h>

int main()
{
    int n,i,j;
    int graph[10][10], visited[10]={0};

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&graph[i][j]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(graph[i][j] && !visited[i] && !visited[j])
            {
                visited[i]=visited[j]=1;
                printf("%d %d\n",i,j);
            }
        }
    }
    return 0;
}

// Code By @surya-scsvmv
