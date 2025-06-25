#include "leetcode/1-two-sum.h"
#include "Unity/src/unity.h"

void setUp(void) {}

void tearDown(void) {}

void twoSumTestCase1() {
    int numsSize = 4;
    int nums[] = {2, 7, 11, 15};
    int target = 9;

    int returnSize;
    int* result = twoSum(nums, numsSize, target, &returnSize);
    TEST_ASSERT_EQUAL_INT(2, returnSize);
    TEST_ASSERT_EQUAL_INT(0, result[0]);
    TEST_ASSERT_EQUAL_INT(1, result[1]);

    free(result);
}

void twoSumTestCase2() {
    int numsSize = 3;
    int nums[] = {3, 2, 4};
    int target = 6;

    int returnSize;
    int* result = twoSum(nums, numsSize, target, &returnSize);
    TEST_ASSERT_EQUAL_INT(2, returnSize);
    TEST_ASSERT_EQUAL_INT(1, result[0]);
    TEST_ASSERT_EQUAL_INT(2, result[1]);

    free(result);
}

void twoSumTestCase3() {
    int numsSize = 2;
    int nums[] = {3, 3};
    int target = 6;

    int returnSize;
    int* result = twoSum(nums, numsSize, target, &returnSize);
    TEST_ASSERT_EQUAL_INT(2, returnSize);
    TEST_ASSERT_EQUAL_INT(0, result[0]);
    TEST_ASSERT_EQUAL_INT(1, result[1]);

    free(result);
}
