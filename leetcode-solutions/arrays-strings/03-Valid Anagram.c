#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Your LeetCode solution function
bool isAnagram(char *s, char *t)
{
    // If the strings are different lengths, they cannot be anagrams
    if (strlen(s) != strlen(t))
    {
        return false;
    }

    // Create a frequency array for the 26 lowercase English letters
    int counts[26] = {0};

    // Increment for characters in s, decrement for characters in t
    for (int i = 0; s[i] != '\0'; i++)
    {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }

    // If they are anagrams, all counts will be back to 0
    for (int i = 0; i < 26; i++)
    {
        if (counts[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // Test Case 1: Standard valid anagram
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Test 1 Result: %s\n", isAnagram(s1, t1) ? "true" : "false");

    // Test Case 2: Standard invalid anagram
    char s2[] = "rat";
    char t2[] = "car";
    printf("Test 2 Result: %s\n", isAnagram(s2, t2) ? "true" : "false");

    // Test Case 3: Edge case (Different lengths)
    char s3[] = "a";
    char t3[] = "ab";
    printf("Test 3 Result: %s\n", isAnagram(s3, t3) ? "true" : "false");

    return 0;
}