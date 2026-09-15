## Problem: Reverse Linked List (Easy)

_Link:_ https://leetcode.com/problems/reverse-linked-list/submissions/2142964804/

### Approach

I used an iterative approach with three pointers: prev, curr, and nextTemp. As I traversed the list, I temporarily stored the next node, pointed the current node's next reference backwards to prev, and then shifted both the prev and curr pointers one step forward. By the end of the loop, prev becomes the new head of the reversed list.

### Complexity

- Time: $O(n)$ where $n$ is the number of nodes in the linked list. We traverse the list exactly once.
- Space: $O(1)$ because we only use a few pointers to rearrange the existing nodes in-place, without allocating any extra memory.

### Notes

Dealing with linked lists in C requires manually defining the struct and allocating memory during local testing, which is a great exercise in pointer management. The iterative approach is highly memory-efficient compared to a recursive approach, which would take $O(n)$ space on the call stack.
