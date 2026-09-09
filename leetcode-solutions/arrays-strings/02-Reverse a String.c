#include <stdio.h>

// Your LeetCode solution function
void reverseString(char *s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        // Swap characters
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        // Move pointers toward the middle
        left++;
        right--;
    }
}

// Helper function to print the array exactly like LeetCode's output
void printArray(char *s, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("\"%c\"", s[i]);
        if (i < size - 1)
            printf(",");
    }
    printf("]\n");
}

int main()
{
    // Test Case 1: Standard odd-length array
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    int size1 = 5;
    printf("Test 1 Original: ");
    printArray(s1, size1);
    reverseString(s1, size1);
    printf("Test 1 Reversed: ");
    printArray(s1, size1);
    printf("\n");

    // Test Case 2: Even-length array (Edge case)
    char s2[] = {'H', 'a', 'n', 'n', 'a', 'h'};
    int size2 = 6;
    printf("Test 2 Original: ");
    printArray(s2, size2);
    reverseString(s2, size2);
    printf("Test 2 Reversed: ");
    printArray(s2, size2);

    return 0;
}