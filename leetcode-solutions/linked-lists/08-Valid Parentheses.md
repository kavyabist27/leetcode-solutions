## Problem: Valid Parentheses (Easy)

_Link:_ https://leetcode.com/problems/valid-parentheses/submissions/2142939734/

### Approach

I implemented a stack using an array. I iterated through the string, pushing any opening bracket onto the stack. When encountering a closing bracket, I popped the top element from the stack and checked if it was the corresponding opening bracket. The string is only valid if all brackets match and the stack is entirely empty at the end.

### Complexity

- Time: $O(n)$ where $n$ is the length of the string. We iterate through the characters exactly once.
- Space: $O(n)$ because in the worst-case scenario (a string of all opening brackets), the stack will store all $n$ characters.

### Notes

Adding a quick check at the beginning to return false if the string length is odd is a great micro-optimization, as an odd-length string can never have perfectly paired brackets.
