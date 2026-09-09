## Problem: Reverse String (Easy)

_Link:_ https://leetcode.com/problems/reverse-string/submissions/2136035632/

### Approach

I used a two-pointer approach. I initialized a left pointer at the start of the array and a right pointer at the end. In a loop, I swapped the characters at these indices and moved the pointers toward the middle until they crossed.

### Complexity

- Time: $O(n)$ where $n$ is the number of characters. We iterate through half the string, which simplifies to linear time.
- Space: $O(1)$ because the problem requires modifying the array in-place, and we only use a single temporary variable for swapping.

### Notes

This is a standard pattern for array/string reversal. Testing an even-length versus an odd-length string locally ensured that the pointers crossed correctly in both scenarios without out-of-bounds errors.
