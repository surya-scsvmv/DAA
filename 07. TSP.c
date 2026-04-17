/*
Title: Travelling Salesman Problem
Aim: To find minimum cost path.

Algorithm:
1. Mark visited
2. Try all paths recursively
3. Return minimum cost
*/

#include<stdio.h>
#include<limits.h>

int n, cost[10][10], visited[10];

int min(int a,int b){ return a<b?a:b; }

int tsp(int city)
{
    int i,min_cost=INT_MAX,temp;
    visited[city]=1;

    for(i=0;i<n;i++)
    {
        if(!visited[i] && cost[city][i]!=0)
        {
            temp=cost[city][i]+tsp(i);
            min_cost=min(min_cost,temp);
        }
    }

    visited[city]=0;
    return (min_cost==INT_MAX)?cost[city][0]:min_cost;
}

int main()
{
    int i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&cost[i][j]);

    printf("%d",tsp(0));
    return 0;
}

// Code By @surya-scsvmv
