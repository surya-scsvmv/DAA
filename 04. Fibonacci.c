/*
Title: Fibonacci (Recursion & Iteration)
Aim: To compute Fibonacci numbers.

Algorithm:
Recursive:
1. If n <=1 return n
2. Return f(n-1)+f(n-2)

Iterative:
1. Initialize a=0,b=1
2. Loop and compute next term
*/

#include<stdio.h>

int fib_rec(int n)
{
    if(n<=1) return n;
    return fib_rec(n-1)+fib_rec(n-2);
}

int fib_iter(int n)
{
    int a=0,b=1,c,i;
    if(n==0) return 0;
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d\n", fib_rec(n));
    printf("%d\n", fib_iter(n));

    return 0;
}

// Code By @surya-scsvmv
