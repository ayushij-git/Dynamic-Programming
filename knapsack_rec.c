// Online C compiler to run C program online
#include <stdio.h>
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int knapsack(int val[], int weight[], int n, int W)
{
    if (W == 0 || n ==0)
       return 0;
     
     if (weight[n] > W) {
        return knapsack(val, weight, n-1, W);
     } else {  
        return (max((val[n] + knapsack(val, weight, n-1, W-weight[n])),  
             knapsack(val, weight, n-1, W)));
     }

}
int main() {
    // Write C code here
    int weight[] = {10, 20, 30};
    int val[] = {60, 100, 120};
    int W = 50;
    int max = 0;
    int n = sizeof(val)/sizeof(val[0]);
    max = knapsack(val, weight, n, W);
    printf("MAX %d", max);
    return 0;
}
