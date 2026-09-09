#include <stdio.h>

// Your LeetCode solution function
int search(int *nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        // Calculate mid this way to prevent integer overflow for very large arrays
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid; // Target found
        }
        else if (nums[mid] < target)
        {
            left = mid + 1; // Target must be in the right half
        }
        else
        {
            right = mid - 1; // Target must be in the left half
        }
    }

    return -1; // Target not found
}

int main()
{
    // Test Case 1: Target exists in the array
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int size1 = 6;
    int target1 = 9;
    printf("Test 1 Result: %d\n", search(nums1, size1, target1)); // Expected: 4

    // Test Case 2: Target does not exist
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int size2 = 6;
    int target2 = 2;
    printf("Test 2 Result: %d\n", search(nums2, size2, target2)); // Expected: -1

    // Test Case 3: Edge case (Single element array, target found)
    int nums3[] = {5};
    int size3 = 1;
    int target3 = 5;
    printf("Test 3 Result: %d\n", search(nums3, size3, target3)); // Expected: 0

    return 0;
}