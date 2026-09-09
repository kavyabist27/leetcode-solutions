#include <stdio.h>
#include <limits.h>

// Your LeetCode solution function
int maxProfit(int *prices, int pricesSize)
{
    int min_price = INT_MAX;
    int max_profit = 0;

    for (int i = 0; i < pricesSize; i++)
    {
        // Update the lowest price seen so far
        if (prices[i] < min_price)
        {
            min_price = prices[i];
        }
        // If selling today yields a better profit, update max_profit
        else if (prices[i] - min_price > max_profit)
        {
            max_profit = prices[i] - min_price;
        }
    }

    return max_profit;
}

int main()
{
    // Test Case 1: Standard profitable case
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = 6;
    printf("Test 1 Result: %d\n", maxProfit(prices1, size1)); // Expected: 5

    // Test Case 2: No profit possible (decreasing prices)
    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = 5;
    printf("Test 2 Result: %d\n", maxProfit(prices2, size2)); // Expected: 0

    // Test Case 3: Edge case (Single day, no transaction possible)
    int prices3[] = {5};
    int size3 = 1;
    printf("Test 3 Result: %d\n", maxProfit(prices3, size3)); // Expected: 0

    return 0;
}