## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/submissions/2136051663/

### Approach

I used a frequency counting approach with a fixed-size array of 26 integers to represent the lowercase English alphabet. I iterated through both strings simultaneously, incrementing the count for characters in the first string and decrementing for the second. A final pass checks if all counts returned to zero.

### Complexity

- Time: $O(n)$ where $n$ is the length of the strings. We iterate through the characters exactly once, and the final loop is a constant 26 operations.
- Space: $O(1)$ because the frequency array size is always exactly 26, regardless of how large the input strings are.

### Notes

This frequency array approach is significantly faster than sorting both strings (which would be $O(n \log n)$ time). Checking the string lengths at the very beginning also prevents unnecessary processing for obvious edge cases.
