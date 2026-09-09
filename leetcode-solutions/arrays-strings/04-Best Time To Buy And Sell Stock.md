## Problem: Best Time to Buy and Sell Stock (Easy-Medium)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2136057007/

### Approach

I used a single-pass greedy approach. I iterated through the array once, keeping track of the absolute lowest stock price seen so far. At each step, I calculated the potential profit if I sold at the current price and updated the global maximum profit if this new potential profit was higher.

### Complexity

- Time: $O(n)$ where $n$ is the number of days. The array is traversed exactly one time.
- Space: $O(1)$ because the algorithm only uses two variables (`min_price` and `max_profit`) regardless of the array's size.

### Notes

This approach is much more efficient than the brute-force $O(n^2)$ method of checking every possible pair of days. Keeping track of the minimum value dynamically allows for solving the problem in a single pass.
