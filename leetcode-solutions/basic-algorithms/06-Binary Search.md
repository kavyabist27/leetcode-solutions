## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/submissions/2136080126/

### Approach

I implemented a standard binary search algorithm. Using two pointers (`left` and `right`), I calculated the midpoint of the search space. If the midpoint was the target, I returned its index. If the midpoint was less than the target, I narrowed the search to the right half; otherwise, I searched the left half.

### Complexity

- Time: $O(\log n)$ where $n$ is the number of elements in the array. The search space is halved during each step of the `while` loop.
- Space: $O(1)$ because we only allocate a few integer variables (`left`, `right`, `mid`) to keep track of the indices.

### Notes

Calculating the midpoint as `left + (right - left) / 2` instead of `(left + right) / 2` is a crucial habit to prevent integer overflow when dealing with extremely large arrays.
