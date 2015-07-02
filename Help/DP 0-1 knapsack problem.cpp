#include<stdio.h>
int ks[100][100];
// A utility function that returns maximum of two integers
int max(int a, int b)
{
    return (a > b)? a : b;
}

// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    // Base Case
    if (n == 0 || W == 0)
        return 0;

    if(ks[n][W])
        return ks[n][W];

    // If weight of the nth item is more than Knapsack capacity W, then
    // this item cannot be included in the optimal solution
    if (wt[n-1] > W)
        return ks[n][W] = knapSack(W, wt, val, n-1);

    // Return the maximum of two cases: (1) nth item included (2) not included
    else return ks[n][W] = max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                         knapSack(W, wt, val, n-1)
                       );
}

// Driver program to test above function
int main()
{
    int val[] = {64,85,52,99,39,54};
    int wt[] = {26,22,4,18,13,9};
    int  W = 26;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}
