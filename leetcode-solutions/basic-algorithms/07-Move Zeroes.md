## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/submissions/2136087354/

### Approach

I used a two-pointer approach to modify the array in-place. An `insertPos` pointer tracks the index where the next non-zero element should go. As I iterated through the array, any time I encountered a non-zero element, I swapped it with the element at `insertPos` and incremented `insertPos`. This naturally pushes all zeroes to the end while maintaining the relative order of the other elements.

### Complexity

- Time: $O(n)$ where $n$ is the length of the array. The array is traversed exactly once.
- Space: $O(1)$ because the modifications are done entirely in-place without allocating any additional data structures.

### Notes

Swapping the elements rather than just overwriting and filling the end with zeroes later handles edge cases (like an array with no zeroes) very elegantly, minimizing unnecessary writes.
