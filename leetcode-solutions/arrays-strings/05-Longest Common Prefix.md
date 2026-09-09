## Problem: Longest Common Prefix (Easy-Medium)

**Link:** https://leetcode.com/problems/longest-common-prefix/submissions/2136071552/

### Approach

I used a vertical scanning approach. Taking the first string as a baseline, I iterated through its characters one by one. For each character, I checked the corresponding index in all other strings. The moment a mismatch occurred or another string ended, I truncated the baseline string in-place by inserting a null terminator and returned it.

### Complexity

- Time: $O(S)$ where $S$ is the sum of all characters in all strings. In the worst case, all strings are identical, and we check every single character.
- Space: $O(1)$ because the first string is modified in-place to form the result, requiring no extra allocated memory.

### Notes

Modifying the input array in-place rather than allocating a brand new character array for the prefix keeps the memory footprint as low as possible. Vertical scanning is also efficient because it aborts early on the shortest string.
