#include "problems/1-two-sum.h"
#include "Unity/src/unity.h"

void setUp(void) {}

void tearDown(void) {}

void twoSumTestCase1() {
    int numsSize = 4;
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int expected[] = {0, 1};

    int returnSize;
    int* result = twoSumBrute(nums, numsSize, target, &returnSize);
    TEST_ASSERT_EQUAL_INT32_ARRAY(expected, result, returnSize);
    free(result);

    returnSize = 0;
    result = twoSumSort(nums, numsSize, target, &returnSize);
    TEST_ASSERT_EQUAL_INT32_ARRAY(expected, result, returnSize);
    free(result);
}

void twoSumTestCase2() {
    int numsSize = 3;
    int nums[] = {3, 2, 4};
    int target = 6;
    int expected[] = {1, 2};

    int returnSize;
    int* result = twoSumBrute(nums, numsSize, target, &returnSize);
    TEST_ASSERT_EQUAL_INT32_ARRAY(expected, result, returnSize);
    free(result);

    returnSize = 0;
    result = twoSumSort(nums, numsSize, target, &returnSize);
    TEST_ASSERT_EQUAL_INT32_ARRAY(expected, result, returnSize);
    free(result);
}

void twoSumTestCase3() {
    int numsSize = 2;
    int nums[] = {3, 3};
    int target = 6;
    int expected[] = {0, 1};

    int returnSize;
    int* result = twoSumBrute(nums, numsSize, target, &returnSize);
    TEST_ASSERT_EQUAL_INT32_ARRAY(expected, result, returnSize);
    free(result);

    returnSize = 0;
    result = twoSumSort(nums, numsSize, target, &returnSize);
    TEST_ASSERT_EQUAL_INT32_ARRAY(expected, result, returnSize);
    free(result);
}
