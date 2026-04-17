/*
Title: Tower of Hanoi
Aim: To solve Tower of Hanoi using recursion.

Algorithm:
1. If n == 1 move disk
2. Move n-1 disks to auxiliary
3. Move nth disk
4. Move n-1 disks to destination
*/

#include<stdio.h>

void tower(int n, char from, char to, char aux)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    tower(n-1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    tower(n-1, aux, to, from);
}

int main()
{
    int n;
    scanf("%d", &n);
    tower(n, 'A', 'C', 'B');
    return 0;
}

// Code By @surya-scsvmv
