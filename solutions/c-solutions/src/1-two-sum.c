#include "leetcode/1-two-sum.h"
#include <stdlib.h>

/**
 * Brute Force solution
 */
int* twoSumBrute(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(*returnSize * sizeof(int));
    for (int i = 0; i < numsSize - 1; i++)
        for (int j = i + 1; j < numsSize; j++)
            if (nums[i] + nums[j] == target) {
                *returnSize = 2;
                result[0] = i;
                result[1] = j;
                return result;
            }
    *returnSize = 0;
    return result;
}

/**
 * Sorting solution
 */
typedef struct {
    int value;
    int index;
} Pair;

int comparePairs(const void* a, const void* b) {
    return ((const Pair*)a)->value - ((const Pair*)b)->value;
}

int* twoSumSort(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 0;
    int* result = (int*)malloc(2 * sizeof(int));
    Pair numsWithIndexes[numsSize];
    for (int i = 0; i < numsSize; i++) {
        const Pair newPair = {nums[i], i};
        numsWithIndexes[i] = newPair;
    }
    qsort(numsWithIndexes, numsSize, sizeof(Pair), comparePairs);
    for (int i = 0; i < numsSize; i++) {
        const Pair desired = {target - numsWithIndexes[i].value, 0};
        Pair* found =
            bsearch(&desired, numsWithIndexes + i, numsSize - i, sizeof(Pair), comparePairs);
        if (found == NULL)
            continue;
        *returnSize = 2;
        result[0] = numsWithIndexes[i].index;
        result[1] = found->index;
        break;
    }
    return result;
}
