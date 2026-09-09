#include <stdio.h>

// Your LeetCode solution function
void moveZeroes(int *nums, int numsSize)
{
    int insertPos = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            // Swap the current non-zero element with the element at insertPos
            int temp = nums[insertPos];
            nums[insertPos] = nums[i];
            nums[i] = temp;

            insertPos++;
        }
    }
}

// Helper function to print the array
void printArray(int *nums, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", nums[i]);
        if (i < size - 1)
            printf(",");
    }
    printf("]\n");
}

int main()
{
    // Test Case 1: Standard mix of zeroes and numbers
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = 5;
    printf("Test 1 Original: ");
    printArray(nums1, size1);
    moveZeroes(nums1, size1);
    printf("Test 1 Result:   ");
    printArray(nums1, size1); // Expected: [1,3,12,0,0]

    // Test Case 2: Edge case (Single zero)
    int nums2[] = {0};
    int size2 = 1;
    printf("\nTest 2 Original: ");
    printArray(nums2, size2);
    moveZeroes(nums2, size2);
    printf("Test 2 Result:   ");
    printArray(nums2, size2); // Expected: [0]

    // Test Case 3: Edge case (No zeroes)
    int nums3[] = {1, 2, 3};
    int size3 = 3;
    printf("\nTest 3 Original: ");
    printArray(nums3, size3);
    moveZeroes(nums3, size3);
    printf("Test 3 Result:   ");
    printArray(nums3, size3); // Expected: [1,2,3]

    return 0;
}