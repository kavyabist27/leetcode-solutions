#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Your LeetCode solution function
bool isValid(char *s)
{
    int len = strlen(s);

    // An odd-length string can never be perfectly matched
    if (len % 2 != 0)
        return false;

    // Create a stack with the maximum possible size
    char stack[10000];
    int top = -1;

    for (int i = 0; i < len; i++)
    {
        char c = s[i];

        // Push opening brackets onto the stack
        if (c == '(' || c == '{' || c == '[')
        {
            stack[++top] = c;
        }
        // Handle closing brackets
        else
        {
            // If the stack is empty, there is no matching opening bracket
            if (top == -1)
                return false;

            char open = stack[top--]; // Pop the top element

            // Check for mismatches
            if (c == ')' && open != '(')
                return false;
            if (c == '}' && open != '{')
                return false;
            if (c == ']' && open != '[')
                return false;
        }
    }

    // If the stack is empty at the end, all brackets were matched
    return top == -1;
}

int main()
{
    // Test Case 1: Standard valid string
    char s1[] = "()[]{}";
    printf("Test 1 Result: %s\n", isValid(s1) ? "true" : "false"); // Expected: true

    // Test Case 2: Standard invalid string (mismatched)
    char s2[] = "(]";
    printf("Test 2 Result: %s\n", isValid(s2) ? "true" : "false"); // Expected: false

    // Test Case 3: Valid nested string
    char s3[] = "([])";
    printf("Test 3 Result: %s\n", isValid(s3) ? "true" : "false"); // Expected: true

    // Test Case 4: Edge case (Incorrect order)
    char s4[] = "([)]";
    printf("Test 4 Result: %s\n", isValid(s4) ? "true" : "false"); // Expected: false

    return 0;
}