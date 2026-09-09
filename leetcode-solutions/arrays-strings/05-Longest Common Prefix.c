#include <stdio.h>
#include <string.h>

// Your LeetCode solution function
char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    // Iterate through the characters of the first string
    for (int i = 0; strs[0][i] != '\0'; i++)
    {
        char current_char = strs[0][i];

        // Compare with the rest of the strings in the array
        for (int j = 1; j < strsSize; j++)
        {
            // If we hit the end of another string or find a mismatch
            if (strs[j][i] == '\0' || strs[j][i] != current_char)
            {
                // Truncate the first string at this exact index
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main()
{
    // Test Case 1: Standard common prefix
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";
    char *strs1[] = {str1, str2, str3};
    printf("Test 1 Result: \"%s\"\n", longestCommonPrefix(strs1, 3)); // Expected: "fl"

    // Test Case 2: No common prefix
    char str4[] = "dog";
    char str5[] = "racecar";
    char str6[] = "car";
    char *strs2[] = {str4, str5, str6};
    printf("Test 2 Result: \"%s\"\n", longestCommonPrefix(strs2, 3)); // Expected: ""

    // Test Case 3: Edge case (Single string)
    char str7[] = "solitary";
    char *strs3[] = {str7};
    printf("Test 3 Result: \"%s\"\n", longestCommonPrefix(strs3, 1)); // Expected: "solitary"

    return 0;
}